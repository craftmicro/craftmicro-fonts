# Craft Micro pixel/bitmap font library

WARNING: fonts have not yet been tested. This repo is brand new :)

The fonts in this library are all freeware fonts (freeware, OFL, public domain) that have been sourced from various places and converted to PackedBDF format. The original fonts (incluidng readmes and other bundled files) are in the [input](/input) folder.

## Browse the fonts

To browse the available fonts, visit the [library](/library/readme.md) folder.

## Creating fonts

The fonts in this library are created directly from the font zip files in the `input` folder by running the `convert_fonts.py` python script. It converts ttf, otf and other font formats to the PackedBDF format, generates a preview image, and adds it to the library folder in the correct categories. This process is still not that stable (still takes quite a bit of manual effort). Once it has been improved, the [instructions](convert_fonts.md) will be updated to enable community contributions! 

In the meantime you can create your own PackedDBF fonts by [following these instructions](https://github.com/projectitis/packedbdf).

## Font format

PackedDBF is a bitmap font format based on BDF. It is the format supported by the Craft Micro SDK.

- [Click here for more information about PackedDBF](https://github.com/projectitis/packedbdf).
