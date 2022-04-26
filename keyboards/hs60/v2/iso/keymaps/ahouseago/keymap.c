/* Copyright 2018 Yiancar
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

//This is the ISO version of the PCB

// Hyper when held, escape when pressed.
#define HYP_ESC MT(MOD_RGUI, KC_ESC)
#define MEN_MO3 LT(3, KC_APP)

// These are for discord mappings
#define ALT_HOM RALT(KC_HOME)
#define ALT_INS RALT(KC_INS)
#define PTT_RET RALT(S(KC_ENT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_iso( /* Base */
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,
    HYP_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS, KC_ENT,
    KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,           KC_RSFT,
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 MO(1),    MO(2)  ,  MEN_MO3,  MO(4)),

[1] = LAYOUT_60_iso( /* FN */
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,
    _______,  KC_BTN1,  KC_MS_U,  KC_BTN2,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET  ,
    _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,  _______,  _______,
    _______,  _______,  KC_BTN3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

[2] = LAYOUT_60_iso(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  ALT_INS,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  ALT_HOM,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            PTT_RET,
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

[3] = LAYOUT_60_iso(
    RESET,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  S1_DEC,   S1_INC,   S2_DEC,   S2_INC,   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  EF_DEC,   EF_INC,   H1_DEC,   H1_INC,   H2_DEC,   H2_INC,   BR_DEC,   BR_INC,   ES_DEC,   ES_INC,             _______,
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

[4] = LAYOUT_60_iso(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_VOLD,  KC_VOLU,  KC_MUTE,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),
};

// Transparent layer -- copy to create a new one
/*(_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, */
/* _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, */
/* _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, */
/* _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______, */
/* _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______), */

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
    }
    return true;
}
