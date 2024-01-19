#pragma once

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define RETRO_TAPPING
#define RETRO_TAPPING_PER_KEY

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Simultaneously pressing both left and right shifts turns on Caps Word.
// This will capitalise all characters until a non-word character is typed.
// https://docs.qmk.fm/#/feature_caps_word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 5000      // Revert to normal after 5 seconds.

#undef RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED
#define RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// the default brightness
#undef RGB_BACKLIGHT_BRIGHTNESS
#define RGB_BACKLIGHT_BRIGHTNESS 80

// the default effect (RGB test)
#undef RGB_BACKLIGHT_EFFECT
#define RGB_BACKLIGHT_EFFECT 1

// the default color1 and color2
#undef RGB_BACKLIGHT_COLOR_1
#undef RGB_BACKLIGHT_COLOR_2
#define RGB_BACKLIGHT_COLOR_1 { .h = 32, .s = 180 }
#define RGB_BACKLIGHT_COLOR_2 { .h = 32, .s = 180 }
