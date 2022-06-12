# Craft Micro pixel/bitmap font library

The fonts in this library are all freeware fonts (freeware, OFL, public domain) that have been sourced from various places and converted to PackedBDF format.

## Browse the fonts

To browse the available fonts, visit the [library](/library/readme.md) folder.

## Creating fonts

The fonts in this library are created directly from the font zip files in the `input` folder by running the `convert_fonts.py` python script. It converts ttf, otf and other font formats to the PackedBDF format, generates a preview image, and adds it to the library folder in the correct categories. This process is still not that stable (still takes quite a bit of manual effort). Once it has been improved, the [instructions](convert_fonts.md) will be updated to enable community contributions! 

In the meantime you can create your own PackedDBF fonts by [following these instructions](https://github.com/projectitis/packedbdf).

## Font format

PackedDBF is a bitmap font format based on BDF. It is the format supported by the Craft Micro SDK.

- [Click here for more information about PackedDBF](https://github.com/projectitis/packedbdf).

## License

These fonts are variously licensed (unlicense, freeware, public domain, SIL, OFL etc), but fonts have only been selected if they have a __non-restrictive personal and commercial use__ license. The original fonts (including readme and other bundled files) can be found in the [input](/input) folder, so feel free to check those out if you want more detail on a specific font.

None of these fonts have an attribution license, so you do not need to mention the author of the fonts in your works.

Please [let us know](https://github.com/craftmicro/craftmicro-fonts/issues) if any of these fonts have inadvertantly been included with an incorrect license and they will be removed.
