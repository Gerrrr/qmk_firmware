/* Copyright 2019 Leo Batyuk
 * Copyright 2020 Drashna Jaelre <@drashna>
 * Copyright 2020 @ben_roe (keycapsss.com)
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

#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,--------------------------------------------.                    ,----------------------------------------------.
 * |   ESC   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -        |
 * |---------+------+------+------+------+------|                    |------+------+------+------+------+-----------|
 * |   Tab   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  +        |
 * |---------+------+------+------+------+------|                    |------+------+------+------+------+-----------|
 * |  LCTRL  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '        |
 * |---------+------+------+------+------+------|       |    |       |------+------+------+------+------+-----------|
 * |  LShift |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift/Enter|
 * `-------------------------------------------|       /     \      \-----------------------------------------------'
 *                 |  DEL | LCMD | LALT |LOWER| Space /       \Enter \  |RAISE |BackSP| RCMD | RALT |
 *                 `---------------------------------'         '------------------------------------'
 */

 [_QWERTY] = LAYOUT(
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_PLUS,
    KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,  XXXXXXX,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                      KC_DEL, KC_LCMD, KC_LALT, LOWER,   KC_SPC,   KC_ENT,   RAISE,   KC_BSPC, KC_RCMD, KC_RALT
),
/* LOWER: Functional keys, symbols, and numbers
 * ,-------------------------------------------.                    ,-----------------------------------------.
 * |  ESC   |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |--------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  TAB   |  1   |  2   |  3   |  4   |  5   |                    |  6   |  7   |  8   |  9   |   0  | F12  |
 * |--------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   ~  |
 * |--------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | LShift |      |      |  [   |  ]   |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   \  |
 * `-------------------------------------------|       /     \      \-----------------------------------------'
 *                  | DEL | LCMD | LALT |LOWER| Space /       \Enter \  |RAISE |BackSP| RCMD | RALT |
 *                  `--------------------------------'         '------------------------------------'
 */

[_LOWER] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
    _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS,
                      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
/* RAISE: navigation
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ESC |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  TAB |      |      |DelLne|      |      |                    | PgUp |      |  Up  |PrvWrd|NxtWrd|      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL|      |      |      |      | CpsLk|-------.    ,-------| PgDn | Left | Down | Right|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift| Undo | Cut  | Copy | Paste| Redo |-------|    |-------|      |LneBeg|LneEnd|      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                | DEL | LGUI | LALT |LOWER| Space /       \Enter \  |RAISE |BackSP| RGUI | RALT |
 *                `--------------------------------'         '------------------------------------'
 */

[_RAISE] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_PGUP, XXXXXXX, KC_UP,   PRV_WRD, NXT_WRD, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, DEL_LNE, XXXXXXX, KC_CAPS,                     KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
    _______, UNDO,    CUT,     COPY,    PASTE,   REDO,     _______, _______,  XXXXXXX, LNE_BEG, LNE_END, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______,  _______, _______,  _______, _______, _______, _______
),
/* ADJUST: RGB and media
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |RESET |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TOGL | HUE+ | SAT+ | VAL+ | MODE+|      |                    | PREV | PLAY | NEXT |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TOGL | HUE- | SAT- | VAL- | MODE-|      |-------.    ,-------| VOL+ | MUTE | VOL- |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                | DEL | LGUI | LALT |LOWER| Space /       \Enter \  |RAISE |BackSP| RGUI | RALT |
 *                `--------------------------------'         '------------------------------------'
 */

[_ADJUST] = LAYOUT(
    RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, XXXXXXX,                   KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_TOG, RGB_HUD, RGB_SAD, RGB_VAD, RGB_RMOD,XXXXXXX,                   KC_VOLU, KC_MUTE, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______
  )
};


#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // Encoder on master side
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case _RAISE:
                // Volume
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            default:
                // Page up/down
                if (clockwise) {
                    tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
                }
                break;
        }
    }
    // Encoder on slave side
    else if (index == 1) {
        switch (get_highest_layer(layer_state)) {
            case _LOWER:
                // Volume up/down
                if (clockwise) {
                    tap_code16(LCMD(KC_EQL ));
                } else {
                    tap_code16(LCMD(KC_MINS));
                }
                break;
            default:
                // Undo/redo
                if (clockwise) {
                    tap_code16(REDO);
                } else {
                    tap_code16(UNDO);
                }
                break;
        }
    }
    return true;
}
#endif // ENCODER_ENABLE

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    rgblight_set_layer_state(3, layer_state_cmp(state, _ADJUST));
    return state;
}

//
// Lighting Layers
//

const rgblight_segment_t PROGMEM qwerty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 60, HSV_RED}
);
const rgblight_segment_t PROGMEM lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 60, HSV_AZURE}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 60, HSV_SPRINGGREEN}
);
const rgblight_segment_t PROGMEM adjust_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 60, HSV_PURPLE}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = {
	qwerty_layer,
    lower_layer,
    raise_layer,
    adjust_layer,
    NULL
};

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

