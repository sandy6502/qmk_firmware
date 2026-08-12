# sculpt_rp2040

![sculpt_rp2040](imgur.com image replace me!)

This is firmware for MS Sculpt Keyboard ISO-layout wired to
RP2040 Stamp designed by TechBeret.

* Keyboard Maintainer: [Sandy Nelson](https://github.com/sandy6502)
* Hardware Supported: MS Sculpt Keyboard ISO-layout, RP2040
* Hardware Availability: eBay for old MS Sculpts and Pimoroni for Stamp.

Make example for this keyboard (after setting up your build environment):

    make sculpt_rp2040:default

Flashing example for this keyboard:

    make sculpt_rp2040:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
