# Converting a font to PackedBDF

The steps are simple:
- Grab the zip file for the font and drop it in the `input` folder
- Create a json file with the font size and it's labels (sans-serif, cartoon, heavy. etc)
- Run `convert_fonts.py` with `ffpython`

But they are not actually that simple! (sorry)

## Prerequisites

Before you get started:

- Install Python
- And install the Pillow (PIL) python library
- Install FontForge
- Add Font Forge's bundled version of python (ffpython) to your path
- Clone this repository

## Run the script

When you run the font conversion script the first time it will convert all fonts, and may take a while. Every run after that will only convert new fonts or fonts that have changed.

This has only been tested on Windows 11

- Open a command prompt (run as administrator)
- Change directory to the repo. E.g. `cd C:\Projects\craftmicro-fonts`
- Run the script `ffpython convert_fonts.py`

You'll see a lot of output in the console. Many font files are not well made, so fontforge tends to dump a bunch of warning as it loads fonts. Just ignore those, and the process should complete ok.

## Adding new fonts

First you need to discover some important info about your font

- Open the font in Font Forge and play around with bitmap strikes until you find the one that the font was designed with
- Generate some bitmap strikes at different sizes
    - Use `Element > Bitmap strikes available...`
    - Select `mac` (seems to works best)
    - Enter a comma seperated list of pixel sizes in the `Pixel sizes` box
    - Good ones to try first are `8,9,10,12,16,20` - it's very often one of these
    - Press `ok`
- Now view the bitmap strikes to see if they look right
    - Go to `View > 10 pixel bitmap` (for example) and check that it looks right
    - If the font is too small, use `View > Bitmap magnification` with a value of `4` or so
    - Choose different pixel sizes until you have the right one, and note it down (for the next step)
    - If none of them look correct, go to the previous step and generate some more strikes at different sizes

Now prepare the font for conversion

- Zip the font (it can contain other files as well) and drop it in the `input` folder
- Create a file with the same name as the zip but with the extension `.config.json`
    - So if your zip is `my_font.zip` your config file is `my_font.config.json`
- Edit your config
    - Add the size that the font should be converted at
    - Add the labels that apply to the font
    - See below for more details about what you can do with the config file

### Font config file

This is a typical config file for a zip containing just one font file:

```
{
    "size": 16,
    "labels": [
        "serif",
        "script"
    ]
}
```

The script will:
- open the zip, find the first font file and load it into fontforge
- It will create bitmap strikes at 16 pixels (`size`)
- The default range of characters (32 to 126 unicode range) will be used
- The font will be saved with the same name as the zip (but lowercase)
- A preview image will be generated, and the font will be added to the library, `label`ed as a serif font and a script (see below for labels)

Here is a more advanced example:

```
[
    {
        "file": "prime-time.ttf",
        "name": "primetime_regular",
        "size": 8,
        "range": [
            65, 90,
            97, 122
        ],
        "labels": [
            "sans-serif"
        ]
    },
    {
        "file": "prime-time-bold.ttf",
        "name": "primetime_bold",
        "size": 8,
        "range": [
            65, 90,
            97, 122
        ],
        "labels": [
            "sans-serif",
            "heavy"
        ]
    },
]
```

The script will:

- open the zip, find the font file specified by `file` (e.g. `prime-time.ttf`) and load it into fontforge
- It will create bitmap strikes at 8 pixels (`size`)
- The characters specified by `range` will be used. Up to two ranges are allowed (2 are used here)
    - 65 to 90 are the uppercase letters A - Z
    - 97 to 122 are the lowercase letters a - z
- The font will be saved with the `name` specified
- A preview image will be generated, and the font will be added to the library with the specified `label`s

And then:

- This process is repeated for the second `file` in the zip (`prime-time-bold.ttf`)
- It is important for multi-font zip files to each specify a different name

### Labels

You can specify the following labels in your config file:

Always one of

- serif
- sans-serif

Optionally

- italic

Optionally one of

- condensed
- extended

Optionally one of

- thin
- regular
- heavy
- fat

Optionally any number of

- cartoon
- cute
- hand
- script
- western
- futuristic
- outline
- square
- round
- gothic
- horror

These are added automatically by the script and should not be specified in the config

- tiny (6px or less)
- small (7 - 12px)
- medium (13 - 16px)
- large (17 - 32px)
- huge (33px and larger)
