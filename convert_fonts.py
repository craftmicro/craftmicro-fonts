
###
### Convert TTF and OTF fonts to BDF
###

#   The source directory to look for fonts to convert (relative to current dir)
input = 'input'
#   The output directory where BDF fonts are saved (relative to current dir)
output = 'fonts'
#   The output directory where the library is created (relative to current dir)
library = 'library'
#   Valid input font types
font_types = ['ttf', 'otf', 'fon']

###
### Imports
###

import traceback
import fontforge
import glob
import os
import json
import zipfile
import scripts.bdf_to_h
import subprocess
import sys

###
### Initialisation
###

print("\nConverting fonts")
print("----------------")

# Format input directory
input = os.path.dirname(os.path.abspath(__file__)) + os.sep + input + os.sep

# Create output directory if it doesn't exist
output_folder = output
output = os.path.dirname(os.path.abspath(__file__)) + os.sep + output + os.sep
if not os.path.exists(output):
    print('Creating output folder: {0}'.format(output))
    os.makedirs(output)

# Create library directory if it doesn't exist
library = os.path.dirname(os.path.abspath(__file__)) + os.sep + library + os.sep
previews = library + os.path.sep + 'previews' + os.path.sep
if not os.path.exists(library):
    print('Creating library folder: {0}'.format(output))
    os.makedirs(library)
if not os.path.exists(previews):
    print('Creating previews folder: {0}'.format(output))
    os.makedirs(previews)

# Load or create the library config
library_config = {}
if os.path.exists(library + 'library.config.json'):
    print("Loading library config")
    f = open(library + 'library.config.json', "r")
    library_config = json.loads(f.read())
    f.close()
else:
    print('No library config found. Start with empty config')

###
### Convert fonts to BDF using fontforge
###

# Step through fonts to convert
print("Searching for fonts")
font_config_paths = glob.glob(input + '*.config.json')
for font_config_path in font_config_paths:
    config_filename = os.path.basename(font_config_path)
    basename = config_filename[0:-12]
    print('--' + basename)

    # Create library entry for the font
    if not basename in library_config:
        library_config[basename] = {
            'zip_modified': 0,
            'zip_size': 0,
            'config_modified': 0,
            'config_size': 0
        }

    # Check if zip file exists to match config
    if not os.path.exists(input + basename + '.zip'):
        print('  {0}.zip not found. Skipping...',format(basename))
        continue
    # Check if zip file has changed
    zip_modified = os.path.getmtime(input + basename + '.zip')
    zip_size = os.path.getsize(input + basename + '.zip')
    zip_changed = library_config[basename]['zip_modified'] != zip_modified or library_config[basename]['zip_size'] != zip_size
    library_config[basename]['zip_modified'] = zip_modified
    library_config[basename]['zip_size'] = zip_size
    # Load the zip
    zip = zipfile.ZipFile(input + basename + '.zip', mode='r')

    # Check if config has changed
    config_modified = os.path.getmtime(font_config_path)
    config_size = os.path.getsize(font_config_path)
    config_changed = library_config[basename]['config_modified'] != config_modified or library_config[basename]['config_size'] != config_size
    library_config[basename]['config_modified'] = config_modified
    library_config[basename]['config_size'] = config_size
    # Load the config. Ensure it is a list
    f = open(font_config_path, "r")
    font_config = json.loads(f.read())
    f.close()
    if not isinstance(font_config, list): font_config = [font_config]
    
    # Step through each item in the config
    for config_item in font_config:
        # Check if there is an input file specified. Otherwise we use the first font file in the zip
        try:
            input_file = config_item['file']
        except KeyError:
            input_file = ''
            for zip_filename in zip.namelist():
                if zip_filename.split(".")[-1].lower() in font_types:
                    input_file = zip_filename
                    break
            if input_file == '':
                print('  No valid font found in the zip. Skipping')
                continue

        # Get output size
        try:
            output_size = int(config_item['size'])
        except KeyError:
            output_size = font.design_size
        if output_size <= 0:
            output_size = 16

        # Check if there is an output file already
        if 'name' in config_item:
            output_name = config_item['name']
        else:
            output_name = basename.lower()
        output_filename = output + '{0}.h'.format(output_name)
        if not (zip_changed or config_changed):
            if os.path.exists(output_filename):
                print('  Nothing has changed. Skipping')
                continue

        # Load the input font
        print('  Processing {0}'.format(input_file))
        zip.extract(input_file, input)
        try:
            font = fontforge.open(input + input_file)

            # Select the ranges that we want to keep. Note that PackedBDF only supports 2 ranges at this time.
            # Delete all other glyphs in the font
            try:
                char_range = config_item['range']
                if len(char_range) >= 2:
                    font.selection.select(('ranges',None), char_range[0], char_range[1])
                    print('    Character range {0} - {1}'.format( char_range[0], char_range[1]))
                if len(char_range) >= 4:
                    font.selection.select(('more','ranges',None), char_range[2], char_range[3])
                    print('    Character range {0} - {1}'.format( char_range[2], char_range[3]))
            except KeyError:
                # If no ranges are specified, select default (32 - 126)
                font.selection.select(('ranges',None)," ","~")
                print('    Character range 32 - 126')

            # Generate bitmap at correct size and bit depth
            try:
                bit_depth = int(config_item['depth'])
            except KeyError:
                bit_depth = 1
            if not bit_depth in [1,2,4,8]:
                bit_depth = 1
            print('    Output size {0}px @ {1}bpp'.format(output_size, bit_depth))
            bit_depth_mask = 0
            if bit_depth > 1:
                bit_depth_mask = bit_depth << 16
            font.bitmapSizes = ((bit_depth_mask | output_size,),)
            font.regenBitmaps((bit_depth_mask | output_size,))

            # Generate a BDF file output (in the input folder! - it's only temporary)
            font.generate( input + 'temp.bdf' )
            if os.path.exists(input + 'temp.bdf'):
                os.remove(input + 'temp.bdf')
            os.rename( input + 'temp-{0}.bdf'.format(output_size), input + 'temp.bdf' )

            # Process the BDF!
            metrics = scripts.bdf_to_h.packedbdf(input + 'temp.bdf', output_filename, output_name)
            if metrics['success'] == False:
                print('    Exception occured generating font. Skipping')
                print('    ' + metrics['error'])
                continue
            if not 'details' in library_config:
                library_config['details'] = {}
            if not output_name in library_config['details']:
                library_config['details'][output_name] = {}
            library_config['details'][output_name]['bytes'] = metrics['bytes']

            # Test results
            if 'testing' in config_item:
                library_config['details'][output_name]['testing'] = config_item['testing']

            # Generate the preview image
            # To do this we call a differnet version of python (because the current script is
            # being run by ffpython)
            try:
                subprocess.call('python ./scripts/generate_preview.py "{0}" {1} "{2}"'.format(input + input_file, output_size, previews + output_name + '.png'))
            except:
                print('    Exception occured generating image preview')

            # Add to library
            if not 'labels' in library_config:
                library_config['labels'] = {}
            if not 'labels' in config_item:
                config_item['labels'] = []
            config_item['labels'].append('all')
            if len([i for i in config_item['labels'] if i in ['tiny','small','medium','large','huge']]) == 0:
                if metrics['cap_height'] < 7:
                    config_item['labels'].append('tiny')
                elif metrics['cap_height'] < 13:
                    config_item['labels'].append('small')
                elif metrics['cap_height'] < 17:
                    config_item['labels'].append('medium')
                elif metrics['cap_height'] < 33:
                    config_item['labels'].append('large')
                else:
                    config_item['labels'].append('huge')
            if len([i for i in config_item['labels'] if i in ['thin','regular','heavy','fat']]) == 0:
                config_item['labels'].append('regular')
            for label in library_config['labels']:
                library_config['labels'][label] = [value for value in library_config['labels'][label] if value != output_name]
            for label in config_item['labels']:
                if not label in library_config['labels']:
                    library_config['labels'][label] = [output_name]
                else:
                    library_config['labels'][label].append(output_name)
            library_config['details'][output_name]['labels'] = config_item['labels']
            library_config['details'][output_name]['labels'].remove('all')

        except Exception as e:
            print('      Exception occured. Skipping')

        if os.path.exists(input + input_file):
            os.remove(input + input_file)
        if os.path.exists(input + 'temp.bdf'):
            os.remove(input + 'temp.bdf')

# Save the library config
with open(library + 'library.config.json', 'w') as outfile:
    json.dump(library_config, outfile, indent=4)

# Generate the index
def append_labels(index, labels, data, exclude):
    styles = []
    for label in labels:
        if label in data and not label in exclude:
            count = len(data[label])
            if count > 0:
                styles.append('[{0} ({1})]({0}.md)'.format(label, count))
    index.append('- ' + ' | '.join(styles))

index = []
index.append('- [all fonts ({0})](readme.md)'.format(len(library_config['labels']['all'])))
append_labels(index, ['sans-serif', 'serif'], library_config['labels'], [])
append_labels(index, ['tiny', 'small', 'medium', 'large', 'huge'], library_config['labels'], [])
append_labels(index, ['thin', 'regular', 'heavy'], library_config['labels'], [])
append_labels(index, ['condensed', 'extended'], library_config['labels'], [])
labels = sorted(library_config['labels'])
append_labels(index, labels, library_config['labels'], ['all','sans-serif','serif','tiny','small','medium','large','huge','thin','regular','heavy','fat','extended','condensed'])

# Build the library readme pages
for label in library_config['labels']:
    readme = []
    readme.append('# ' + label + '\n')
    readme.extend(index)
    fonts = sorted(library_config['labels'][label])
    for font in fonts:
        readme.append('## ' + font + '\n')
        readme.append('{0:,} bytes, {1}\n'.format(library_config['details'][font]['bytes'], ', '.join(library_config['details'][font]['labels'])))
        if 'testing' in library_config['details'][font]:
            notes = ''
            if 'notes' in library_config['details'][font]['testing']:
                notes = ' with notes: ' + library_config['details'][font]['testing']['notes']
            if library_config['details'][font]['testing']['result'] == True:
                readme.append('_Testing passed' + notes + '_\n')
            else:
                readme.append('__Testing failed' + notes + '__\n')
        else:
             readme.append('Not tested\n')
        if os.path.exists(previews + font + '.png'):
            readme.append('[![font preview](previews/{0}.png?raw=true "{0}")]({1})\n'.format(font, '/' + output_folder + '/' + font + '.h'))
        else:
            readme.append('[No preview image. Click to view file]({0})\n\n'.format('/' + output_folder + '/' + font + '.h'))
    if label == 'all':
        f = open(library + 'readme.md', "w")
    else:
        f = open(library + label + '.md', "w")
    f.write('\n'.join(readme))
    f.close()
