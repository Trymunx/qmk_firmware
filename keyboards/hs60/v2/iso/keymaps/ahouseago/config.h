#pragma once

#define TAPPING_TERM 200
#define RETRO_TAPPING

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
