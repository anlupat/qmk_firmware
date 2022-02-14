/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Eduardo Fernandes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3434
#define PRODUCT_ID      0xFE04
#define DEVICE_VER      0x0002

#define MANUFACTURER    Keychron
#define PRODUCT         K3 White Optical

#define USB_MAX_POWER_CONSUMPTION 100

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define DIODE_DIRECTION  COL2ROW
#define MATRIX_COL_PINS  { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15 }
#define MATRIX_ROW_PINS  { C3, C4, C5, C6, C7, C8 }

/* LED matrix */
#define LED_MATRIX_ROWS         MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 1
#define LED_MATRIX_ROWS_HW      (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS      { C0, C1, C2, D4, C9, C10 }

#define LED_MATRIX_COLS         MATRIX_COLS
#define LED_MATRIX_COL_PINS     MATRIX_COL_PINS
#define DRIVER_LED_TOTAL        (85)

/* Backlight configuration */
#define LED_MATRIX_VAL_STEP             32

/* Dexter's PWM hack */
#define ACTIVATE_PWM_CHAN_0 //A0
#define ACTIVATE_PWM_CHAN_1 //A1
#define ACTIVATE_PWM_CHAN_2 //A2
#define ACTIVATE_PWM_CHAN_3 //A3
#define ACTIVATE_PWM_CHAN_4 //A4
#define ACTIVATE_PWM_CHAN_5 //A5
#define ACTIVATE_PWM_CHAN_6 //A6
#define ACTIVATE_PWM_CHAN_7 //A7
#define ACTIVATE_PWM_CHAN_8 //A8
#define ACTIVATE_PWM_CHAN_9 //A9
#define ACTIVATE_PWM_CHAN_10 //A10
#define ACTIVATE_PWM_CHAN_11 //A11
#define ACTIVATE_PWM_CHAN_12 //A12
#define ACTIVATE_PWM_CHAN_13 //A13
#define ACTIVATE_PWM_CHAN_14 //A14
#define ACTIVATE_PWM_CHAN_15 //A15

/* Connects each switch in the dip switch to the GPIO pin of the MCU */
#define DIP_SWITCH_PINS { D7 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* LED Status indicators */
#define LED_CAPS_LOCK_PIN   D8
#define LED_PIN_ON_STATE    1

#define LED_MATRIX_KEYPRESSES // reacts to keypresses
#define LED_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)

/* Enable led matrix effects */
#define ENABLE_LED_MATRIX_ALPHAS_MODS
#define ENABLE_LED_MATRIX_BREATHING
#define ENABLE_LED_MATRIX_BAND
#define ENABLE_LED_MATRIX_BAND_PINWHEEL
#define ENABLE_LED_MATRIX_BAND_SPIRAL
#define ENABLE_LED_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_LED_MATRIX_CYCLE_UP_DOWN
#define ENABLE_LED_MATRIX_CYCLE_OUT_IN
#define ENABLE_LED_MATRIX_DUAL_BEACON
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_LED_MATRIX_SOLID_SPLASH
#define ENABLE_LED_MATRIX_SOLID_MULTISPLASH
#define ENABLE_LED_MATRIX_WAVE_LEFT_RIGHT
#define ENABLE_LED_MATRIX_WAVE_UP_DOWN
