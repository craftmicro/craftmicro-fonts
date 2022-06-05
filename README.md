# Craft Micro pixel/bitmap font library

WARNING: fonts have not yet been tested. This repo is brand new :)

The fonts in this library are all freeware fonts (freeware, OFL, public domain) that have been sourced from various places and converted to PackedBDF format.

PackedDBF is a bitmap font format based on BDF. It is the format supported by the Craft Micro SDK.

- [Click here for more information about PackedDBF](https://github.com/projectitis/packedbdf).

## Browse the fonts

To browse the available fonts, visit the [library](/library/readme.md) folder.

## Creating fonts

To create your own BDF fonts, [follow these instructions](convert_fonts.md).

The fonts in this library are created directly from the font zip files in the `input` folder by running the `convert_fonts.py` python script. It converts ttf, otf and other font formats to the PackedBDF format, generates a preview image, and adds it to the library folder in the correct categories. This process is still very unstable (depends on well-formatted font files etc). Once it is more stable, the [instructions](convert_fonts.md) will be updated to enable community contributions! 
