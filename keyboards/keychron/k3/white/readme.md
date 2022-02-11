# Keychron K3 White

A customizable 75% keyboard.

* Keyboard Maintainer(s): None, you are at your own risk
* Hardware Supported: Keychron K3 White
* Hardware Availability: [Keychron](https://www.keychron.com/products/keychron-k3-wireless-mechanical-keyboard)
* This is based of the Keychron C2 White implementation

# Install
1. If your keyboard currently has stock firmware installed, put your keyboard first into bootloader by shorting the boot pins found under the spacebar before plugging in your keyboard to the PC. Open the keyboard, next to the SN32 there are two holes, connect them together
1. Download and run [Sonix Flasher](https://github.com/SonixQMK/sonix-flasher/releases/tag/v0.2.1).
1. In Sonix Flasher, select `SN32F26x` under 'Device'. And select `0x00` as the qmk offset.
2. Click 'Flash QMK...' and flash jumploader-keychron_c2_white.bin. This can be found in 'Pre-Compiled Jumploaders' build by the latest [Sonix keyboard bootloader action](https://github.com/SonixQMK/sonix-keyboard-bootloader/actions).
3. Build the firmware
4. In Sonix Flasher, select `SN32F26x` under 'Device'. And select `0x200` as the qmk offset.
5. Lastly, click 'Flash QMK...' and flash keychron_k3_white_default.bin after the build it is located in the QMK_Firmware folder.

# More Info

Make example for this keyboard (after setting up your build environment):

    make keychron/k3/white:default

[Video](https://www.youtube.com/watch?v=aUiKHdI5Vk8) explaining installation for a similar keyboard.

For more info and detailed flashing instructions, please visit https://github.com/CanUnesi/QMK-on-K6#readme

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
