/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MASTER_LEFT
//#define MASTER_RIGHT

//#define EE_HANDS

#define USE_I2C

// Bootloader
#define QMK_ESC_OUTPUT F5 //D2 //F5 // usually COL
#define QMK_ESC_INPUT  B5 //D3 //C6 // usually ROW
#define QMK_LED B0

#define RGBLIGHT_LAYERS
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
// #    define RGBLED_NUM 2
// #    define RGBLED_SPLIT {1, 1}
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 100 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */

#define VIAL_KEYBOARD_UID {0x77, 0x54, 0xFB, 0xFF, 0x06, 0x5B, 0xE7, 0x61}
// #define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
// #define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
