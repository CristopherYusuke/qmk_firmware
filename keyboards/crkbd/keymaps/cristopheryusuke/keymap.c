/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>
#include <enums.h>

#define SFT_A SFT_T(KC_A)
#define SFT_1 SFT_T(KC_1)
#define CTL_S CTL_T(KC_S)
#define CTL_2 CTL_T(KC_2)
#define ALT_D ALT_T(KC_D)
#define ALT_K ALT_T(KC_K)
#define ALT_3 ALT_T(KC_3)
#define ALT_8 ALT_T(KC_8)
#define GUI_F GUI_T(KC_F)
#define GUI_4 GUI_T(KC_4)
#define RGUI_J RGUI_T(KC_J)
#define RGUI_7 RGUI_T(KC_7)
#define RCTL_L RCTL_T(KC_L)
#define RCTL_9 RCTL_T(KC_9)
#define RSFT_SCLN RSFT_T(KC_SCLN)
#define RSFT_0 RSFT_T(KC_0)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    KC_ESC,     KC_Q,   KC_W,      KC_E,   KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TAB,   SFT_A,    CTL_S,    ALT_D,    GUI_F,    KC_G,                       KC_H,  RGUI_J,   ALT_K,   RCTL_L, RSFT_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_GRAVE,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,   KC_M,   KC_COMM,  KC_DOT, KC_SLSH,  TG(_NUM),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                      MO(_NAV),   MO(_SYM),  KC_SPC,     KC_ENT,   MO(_SYM), MO(_NAV)
                                      //`--------------------------'  `--------------------------'

  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    KC_F11, KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,                        KC_F6,    KC_F7,    KC_F8,  KC_F9,  KC_F10, KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|       
    _______, SFT_1,     CTL_2,    ALT_3,   GUI_4,   KC_5,                        KC_6,    RGUI_7,   ALT_8,   RCTL_9,  RSFT_0, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, KC_MINUS, KC_EQUAL, KC_LBRACKET, KC_RBRACKET,             KC_BSLASH, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, MO(_MEDIA),  _______,     _______,   MO(_MEDIA), _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______, _______,   _______, KC_UP,  _______, _______,                      KC_PGUP, KC_HOME, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,                      KC_PGDOWN,KC_END, _______, _______, _______,  _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(_NUM),   _______,  _______,     _______, _______, MO(_NUM)
                                      //`--------------------------'  `--------------------------'
  ),

  [_MEDIA] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    RESET, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                      _______, KC_MPRV, KC_MPLY, KC_MNXT , _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,                      _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______, _______, _______, _______, _______, _______,                      KC_KP_ASTERISK, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   _______, _______, _______, _______, _______, _______ ,                      KC_KP_SLASH, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, _______,                      KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
  [_GAME] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                            ,-----------------------------------------------------.
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                                 KC_1,     KC_2,     KC_3,    KC_4,   KC_5,    KC_6,
  //|--------+--------+--------+--------+--------+--------|                            |--------+--------+--------+--------+--------+--------|
      KC_TAB,   KC_A,   KC_S,    KC_D,     KC_F,    KC_G,                               KC_H,     KC_8,     KC_9,   KC_0,   _______,  _______,
  //|--------+--------+--------+--------+--------+--------|                            |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_Z,   KC_X,     KC_C,   KC_V,     KC_B,                                KC_Y,   KC_U,     _______,  _______, _______,  _______,
  //|--------+--------+--------+--------+--------+--------+--------|          |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   KC_LCTL,  KC_SPC,          KC_BSPC, _______, _______
                                      //`----------------------------'        `--------------------------'

  ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Default\n"), false);
            break;
        case _SYM:
            oled_write_ln_P(PSTR("Symbol\n"), false);
            break;
        case _NAV:
            oled_write_ln_P(PSTR("Arrow\n"), false);
            break;
        case _NUM: 
            oled_write_ln_P(PSTR("Numpad\n"), false);
            break;
        case _MEDIA:
            oled_write_ln_P(PSTR("Media\n"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("Game\n"), false);
            break;
    }
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
        oled_render_logo();
    }
    return false;
}

#endif // OLED_ENABLE