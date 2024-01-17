/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

// Use the lily version to get the Lily58 logo instead of the qmk logo
#define OLED_FONT_H "lib/glcdfont_lily.c"

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Simultaneously pressing both left and right shifts turns on Caps Word.
// This will capitalise all characters until a non-word character is typed.
// https://docs.qmk.fm/#/feature_caps_word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 5000      // Revert to normal after 5 seconds.
