/* Copyright 2023
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_mit(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,     KC_BSPC,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,    KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,     KC_M,     KC_COMM,  KC_DOT,  KC_SLSH,  KC_ENT ,
    RGB_TOG,  KC_LCTL,  KC_LALT,  KC_LGUI,  TL_LOWR,  KC_SPC,  TL_UPPR,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RGHT   
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_planck_mit(
    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,     KC_ASTR,     KC_LPRN,  KC_RPRN,  KC_BSPC,
    KC_DEL,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_UNDS,     KC_PLUS,     KC_LCBR,  KC_RCBR,  KC_PIPE,
    _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   S(KC_NUHS),  S(KC_NUBS),  KC_HOME,  KC_END,   _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MNXT,     KC_VOLD,     KC_VOLU,  KC_MPLY   
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_planck_mit(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
    KC_DEL,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
    _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_NUHS,  KC_NUBS,  KC_PGUP,  KC_PGDN,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY   
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_planck_mit(
    _______,  QK_BOOT,  DB_TOGG,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  KC_DEL,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______   
)

};

/********************************************************************************************* 
added via https://knoopx.github.io/qmk-rgb-matrix-configurator/


    Configure Per Layer, Per Key RGB, and get exactly what you need.
Use:

[{a:7},"Tab","Q","W","E","R","T","Y","U","I","O","P","Back Space"],
["Esc","A","S","D","F","G","H","J","K","L",";","'"],
["Shift","Z","X","C","V","B","N","M",",",".","/","Return"],
["","Ctrl","Alt","Super","&dArr;",{w:2},"","&uArr;","&larr;","&darr;","&uarr;","&rarr;"]

    That is what you need to paste into it for Planck
    https://config.qmk.fm/#/kprepublic/cstc40/daughterboard/LAYOUT_planck_mit

This uses HSV, NOT RGB.  Keep that in mind!
cc3333 is my websafe version and it converts to 
0,75,80 (can't yet test)
https://www.peko-step.com/en/tool/hsvrgb_en.html


https://docs.qmk.fm/#/feature_rgb_matrix?id=custom-rgb-matrix-effects
https://www.reddit.com/r/MechanicalKeyboards/comments/o42wat/help_qmk_perkey_rgb_setup_for_gmmk_pro/

Super confused.  Conflict with quantum.  Cannot compile.  Probably VIAL RGB conflict?
Not really sure.

https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md#indicators

other: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md

https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md#indicators

other: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md


https://github.com/qmk/qmk_firmware/blob/master/docs/feature_secure.md
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_repeat_key.md
*********************************************************************************************/

/* CONVERT TO THIS TO RETAIN BRIGHTNESS, WITH, IDEALLY SEPARATE VARIABLES FOR EACH LAYER FOR EASE OF MODIFICATION LATER.

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    HSV hsv = {0, 255, 255};

    if (layer_state_is(layer_state, 2)) {
        hsv = {130, 255, 255};
    } else {
        hsv = {30, 255, 255};
    }

    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }
    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x01)) { // 0x01 == LED_FLAG_MODIFIER
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
    return false;
}
*/

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (get_highest_layer(layer_state) > 0) {
    uint8_t layer = get_highest_layer(layer_state);
    switch(get_highest_layer(layer_state|default_layer_state)) {
      case 0:

        // rgb_matrix_set_color_all(255, 0, 0); //Light up all the keys in blue

        break;      case 1:

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
          for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED && keymap_key_to_keycode(layer, (keypos_t){ col, row }) > KC_TRNS) {
              rgb_matrix_set_color(index, RGB_GOLD);
             // rgb_matrix_sethsv_noeeprom(8,206,255); // orange
            }
          }
        }

        break;

      case 2:

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
          for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED && keymap_key_to_keycode(layer, (keypos_t){ col, row }) > KC_TRNS) {
              rgb_matrix_set_color(index, RGB_PURPLE);
             // rgb_matrix_sethsv_noeeprom(279,255,255); // purple 
            }
          }
        }

        break;

      case 3:

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
          for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED && keymap_key_to_keycode(layer, (keypos_t){ col, row }) > KC_TRNS) {
              rgb_matrix_set_color(index, RGB_WHITE);
              //rgb_matrix_sethsv_noeeprom(279,255,255); // purple 
            }
          }
        }

        break;
    }
  }
//  return false;

  if (host_keyboard_led_state().caps_lock) {
    for (uint8_t i = led_min; i < led_max; i++) {
      if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
        rgb_matrix_set_color(i, RGB_RED);
        //rgb_matrix_sethsv_noeeprom(0, 255, 255); // red
      }
    }
  }
  return false;
}


/*
        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_GREEN);
                }
            }
        }
    }
    return false;
}
*/

/*
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                rgb_matrix_set_color(i, RGB_RED);
            }
        }
    }
    return false;
}
*/
















/*
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    HSV hsv = {0, 255, 255};

    if (layer_state_is(layer_state, 2)) {
        //hsv = {130, 255, 255};
        
    } else {
        hsv = {30, 255, 255};
    }

    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }
    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x01)) { // 0x01 == LED_FLAG_MODIFIER
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
    return false;
}
*/

/*
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 0:

              rgb_matrix_set_color_all(255, 0, 0); //Light up all the keys in blue

              break;

            case 1:

              rgb_matrix_set_color_all(255, 0, 0); // rest of keys

              //rgb_matrix_set_color(40, 255, 0, 0); // key = Layer 2 switch

              break;

            case 2:

              rgb_matrix_set_color_all(255, 0, 0); // rest of keys

              rgb_matrix_set_color(40, 255, 0, 0); // key = Layer 2 switch

              break;

            case 3:

              //rgb_matrix_set_color(index, red, green, blue); >> this is the template

              rgb_matrix_set_color_all(0, 0, 255); // rest of keys

              rgb_matrix_set_color(43, 255, 255, 0); // key = Layer 3 switch

              break;
        }
    }
    return false;
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

  if (host_keyboard_led_state().caps_lock) {

    rgb_matrix_set_color(25, RGB_ORANGE);

  }


}
*/

/****
const uint8_t PROGMEM rgb_matrix_led_map[][RGB_MATRIX_LED_COUNT][4] = {
   { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },
   { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
   { {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {193,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },
   { {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {193,255,255}, {0,0,255}, {0,0,255}, {0,0,255} }
};
***/




/*********************************************************************************************
const uint8_t PROGMEM rgb_matrix_led_map[][RGB_MATRIX_LED_COUNT][4] = {
   { {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80} },
   { {0,75,80}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,75,80}, {0,75,80}, {0,0,0}, {0,75,80}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,75,80}, {0,75,80}, {0,75,80}, {0,0,0}, {0,0,255}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
   { {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {0,75,80}, {0,75,80}, {0,75,80}, {0,75,80}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,75,80}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
   { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} }
};
*********************************************************************************************/
