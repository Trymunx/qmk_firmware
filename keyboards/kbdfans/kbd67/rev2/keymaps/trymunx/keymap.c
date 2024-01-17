/* Copyright 2018 'mechmerlin'
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    CODEBLK = SAFE_RANGE,
};

// Hyper when held, escape when pressed.
#define HYP_ESC MT(MOD_RGUI, KC_ESC)

// These are for discord mappings
#define ALT_HOM RALT(KC_HOME)
#define ALT_INS RALT(KC_INS)
#define PTT_RET RALT(S(KC_ENT))
#define APP_MO5 LT(5, KC_APP)

#define MOD_UND LCTL(KC_Z)
#define MOD_CUT LCTL(KC_X)
#define MOD_CPY LCTL(KC_C)
#define MOD_EXT LCTL(KC_D)
#define MOD_PST LCTL(KC_V)
#define MOD_PRF LCTL(KC_B) // Prefix for tmux
                           //
// Non-US Tilde (~)
#define KC_NUTD S(KC_NUHS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Home|
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ] |    |PgUp|
     * |-------------------------------------------------------\Rtn|----|
     * |Caps   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| # |   |PgDn|
     * |----------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   Shift  |End |
     * |----------------------------------------------------------------|
     * |Ctrl|Win |Alt | Mod1 | Space | Mod2 | Mod3| FN|Ctrl|Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [0] = LAYOUT_65_iso_split_space(
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_MPLY,
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_VOLU,
            HYP_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_VOLD,
            KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX, KC_MUTE,
            KC_LCTL, KC_LGUI, KC_LALT,    MO(2),              KC_BSPC,       KC_SPC,         MO(3),   MO(4),   APP_MO5,  KC_MRWD, DF(1),   KC_MFFD),

    [1] = LAYOUT_65_iso_split_space(
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_MPLY,
            KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC,          KC_VOLU,
            HYP_ESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, KC_NUHS, KC_ENT,  KC_VOLD,
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_NUBS, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX, KC_MUTE,
            KC_LCTL, KC_LGUI, KC_LALT,    MO(2),              KC_BSPC,       KC_SPC,         MO(3),   MO(4),   APP_MO5,  KC_MRWD, DF(0),   KC_MFFD),

    [2] = LAYOUT_65_iso_split_space(
            CODEBLK, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,LCTL(KC_DEL),
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______,          _______,
            KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_COLN, _______, _______, _______,
            _______, MOD_UND, MOD_CUT, MOD_CPY, MOD_EXT, MOD_PST, MOD_PRF, _______, _______, _______, _______, _______, _______, XXXXXXX, _______,
            _______, _______, _______,      _______,         KC_ENT,       _______,          _______, _______, _______, _______, _______, _______),

    [3] = LAYOUT_65_iso_split_space(
            _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,  KC_INS,
            _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_VOLD, _______, _______, _______, _______,          _______,
            _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______, _______, _______,
            _______, KC_NUBS, _______, _______, _______, _______, _______, KC_NUTD, KC_EQL,  KC_MINS, KC_PLUS, KC_UNDS, _______, XXXXXXX, _______,
            _______, _______, _______,      _______,       _______,        _______,          _______, _______, _______, _______, _______, _______),

    [4] = LAYOUT_65_iso_split_space(
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
            _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, _______, _______,
            _______, _______, KC_BTN3, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_CAPS, XXXXXXX, _______,
            _______, _______, _______,      _______,       _______,        _______,          _______, _______, _______, KC_HOME, _______, KC_END),

    [5] = LAYOUT_65_iso_split_space(
            _______, KC_WBAK, KC_WFWD, KC_WREF, _______, _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI, ALT_HOM, RGB_TOG,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          RGB_SAI,
            _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, _______, _______, _______, _______, PTT_RET, RGB_HUI,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, ALT_INS, _______,
            _______, _______, _______,      _______,       _______,        _______,          _______, _______, _______, KC_MPRV, _______, KC_MNXT),
};

/** Blank (transparent) layer
 * LAYOUT_65_iso_split_space(
 *          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
 *          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *          _______, _______, _______,      _______,       _______,        _______,          _______, _______, _______, _______, _______, _______),
*/

// Initialise variable holding the binary representation of active modifiers.
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Store the current modifier state in the variable.
    mod_state = get_mods();
    switch (keycode) {
        case KC_BSPC:
            {
                // Initialise a bool that keeps track of the delete key status.
                static bool delkey_registered;
                if (record->event.pressed) {
                    // Detect the activation of left alt.
                    if (mod_state & MOD_MASK_ALT) {
                        // First temporarily cancel lalt so that it's not
                        // applied to the KC_DEL keycode.
                        unregister_mods(MOD_MASK_ALT);
                        register_code(KC_DEL);
                        // Update the bool to reflect the status of KC_DEL
                        delkey_registered = true;
                        // Reapply mod state so that the held lalt key still
                        // works even after having tapped the Backspace key.
                        set_mods(mod_state);
                        return false;
                    }
                } else { // On release of KC_BSPC
                    // In case KC_DEL is still being sent even after the release of KC_BSPC
                    if (delkey_registered) {
                        unregister_code(KC_DEL);
                        delkey_registered = false;
                        return false;
                    }
                }
                // Let QMK process the KC_BSPC keycode as usual outside of LAlt.
                return true;
            }
        case CODEBLK:
            if (record->event.pressed) {
                SEND_STRING("```");
            }
            break;
    }
    return true;
}
