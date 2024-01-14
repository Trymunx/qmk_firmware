#pragma once

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Simultaneously pressing both left and right shifts turns on Caps Word.
// This will capitalise all characters until a non-word character is typed.
// https://docs.qmk.fm/#/feature_caps_word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 5000      // Revert to normal after 5 seconds.

// Backlighting configuration https://docs.qmk.fm/#/feature_rgblight?id=configuration
#define RGBLIGHT_DEFAULT_HUE 85
#define RGBLIGHT_DEFAULT_SAT 100
#define RGBLIGHT_DEFAULT_VAL 60
#define RGBLIGHT_SLEEP
