import sys
from PIL import Image, ImageDraw, ImageFont
import math

bgcolor = tuple(int('81776C'[i:i+2], 16) for i in (0, 2, 4))
targetwidth = 830

try:
    font_path = sys.argv[1]
    font_size = int(sys.argv[2])
    output_path = sys.argv[3]
except:
    print('Exception getting command line args (there are {0})'.format(len(sys.argv)))
    sys.exit()

try:
    text = []
    for c in range(33,47): text.append(chr(c))
    for c in range(58,64): text.append(chr(c))
    for c in range(91,96): text.append(chr(c))
    for c in range(123,126): text.append(chr(c))
    text.append("\n")
    for c in range(65,90): text.append(chr(c))
    text.append("\n")
    for c in range(97,122): text.append(chr(c))
    text = ''.join(text)
except:
    print('Exception setting up text')
    sys.exit()

try:
    if font_path.split(".")[-1].lower() == 'ttf':
        font = ImageFont.truetype(font_path, font_size)
    else:
        font = ImageFont.load(font_path)
except:
    print('Exception loading font')
    sys.exit()

try:
    text_width, text_height = font.getsize_multiline(text)
    if text_width > 820:
        text_width = 820
    canvas = Image.new('RGB', (text_width + 10, text_height + 10), bgcolor)
except:
    print('Exception creating canvas')
    sys.exit()

try:
    draw = ImageDraw.Draw(canvas)
    draw.fontmode = "1"
    draw.text((5, 5), text, 'black', font)
except:
    print('Exception drawing text')
    sys.exit()

try:
    scale = math.floor(targetwidth/canvas.width)
    if scale > 1:
        canvas = canvas.resize((canvas.width*scale, canvas.height*scale), resample=Image.Resampling.NEAREST)
except:
    print('Exception resizing canvas')

try:
    finalcanvas = Image.new('RGB', (targetwidth, canvas.height), bgcolor)
    finalcanvas.paste(canvas)
except:
    print('Exception changing canvas size')


try:
    finalcanvas.save(output_path, "PNG")
except:
    print('Exception saving png output')
