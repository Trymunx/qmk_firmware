/* Copyright 2015-2021 Jack Humbert
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

enum layers {
  _DEFAULT,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
    GL_PIPE = SAFE_RANGE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

// Hyper when held, escape when pressed.
#define HYP_ESC MT(MOD_RGUI, KC_ESC)

// These are for discord mappings
#define TOG_DEF RALT(KC_HOME)
#define TOG_MUT RALT(KC_INS)
#define KC_PTT  RALT(S(KC_ENT))

#define CTL_Z   CTL_T(KC_Z)
#define CT_SLSH CTL_T(KC_SLSH)
#define CT_NUBS CTL_T(KC_NUBS)
#define CT_NUHS CTL_T(KC_NUHS)

#define MOD_UND LCTL(KC_Z)
#define MOD_CUT LCTL(KC_X)
#define MOD_CPY LCTL(KC_C)
#define MOD_EXT LCTL(KC_D)
#define MOD_PST LCTL(KC_V)
#define GB_TILD LSFT(KC_NUHS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT_ortho_4x12(
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MPLY,
    HYP_ESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_LSFT, CTL_Z,   KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  CT_SLSH, KC_RSFT,
    KC_LCTL, KC_NUBS, XXXXXXX, KC_LALT, MO(1),   KC_BSPC, KC_ENT,  KC_SPC,  MO(2),   _______, GL_PIPE, KC_RCTL
),

[_LOWER] = LAYOUT_ortho_4x12(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_LGUI, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_COLN,
    _______, KC_LCTL, MOD_CUT, MOD_CPY, MOD_EXT, MOD_PST, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_ortho_4x12(
    _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, TOG_DEF, KC_PSCR,
    _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, TOG_MUT, KC_PTT,
    _______, CT_NUBS, KC_NUBS, KC_PIPE, KC_GT,   _______, GB_TILD, KC_EQL,  KC_MINS, KC_PLUS, CT_NUHS, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    XXXXXXX, XXXXXXX, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U    , KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTL_T(KC_Z):
        case CTL_T(KC_SLSH):
        case CTL_T(KC_NUBS):
        case CTL_T(KC_NUHS):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case GL_PIPE:
        if (record->event.pressed) {
            if (get_mods() & MOD_MASK_SHIFT) {
                SEND_STRING(SS_TAP(X_NUBS));
                SEND_STRING(">");
            } else {
                SEND_STRING(SS_TAP(X_MINS));
                SEND_STRING(">");
            }
        }
        break;
    }
    return true;
};
