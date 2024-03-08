/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

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
// Set the mouse settings to a comfortable speed/accuracy trade-off,-
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 15
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 50
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 0
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

#define MOUSEKEY_MAX_SPEED 7

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0

// Combo key configuration
#define COMBO_COUNT 3
#define COMBO_VARIABLE_LEN
#define COMBO_TERM 50
#define COMBO_MUST_HOLD_PER_COMBO
#define COMBO_HOLD_TERM 100
#define COMBO_TERM_PER_COMBO

// All combos are defined on the base layer
#define COMBO_ONLY_FROM_LAYER 0

// LED configuration
#ifdef RGBLIGHT_ENABLE
  #undef WS2812_DI_PIN
  #undef RGBLED_NUM
  #undef RGBLED_SPLIT
  #define WS2812_DI_PIN C7 
  #define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB
  #define RGBLED_NUM 2
  #define RGBLED_SPLIT {1, 1}

  #define RGBLIGHT_DEFAULT_ON 1
  #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
  #define RGBLIGHT_DEFAULT_HUE 43
  #define RGBLIGHT_DEFAULT_SAT 255
  #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL

  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_STATIC_LIGHT
  #define RGBLIGHT_EFFECT_BREATHING

  #define RGBLIGHT_SLEEP
#endif