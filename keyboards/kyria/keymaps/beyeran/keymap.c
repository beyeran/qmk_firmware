/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#include "keymap.h"

#ifdef OLED_DRIVER_ENABLE
#include "oled.h"
#endif

#ifdef ENCODER_ENABLE
#include "rotary_encoder.h"
#endif

//------------------------------
// Helpers to construct layouts
//------------------------------
#define CONCATE(id, name) id ## name

/* Assemble all the #define of a layer definition */
#define COMPOSE_LAYER(id) \
    CONCATE(id, _ROW1_LEFT) CONCATE(id, _ROW1_RIGHT) \
    CONCATE(id, _ROW2_LEFT) CONCATE(id, _ROW2_RIGHT) \
    CONCATE(id, _ROW3_LEFT) CONCATE(id, _THUMB_ROW1_LEFT) CONCATE(id, _THUMB_ROW1_RIGHT) CONCATE(id, _ROW3_RIGHT) \
    CONCATE(id, _THUMB_ROW2_LEFT) CONCATE(id, _THUMB_ROW2_RIGHT)

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)


//-------------------------
// Keymaps definitions
// & layer states behavior
//-------------------------

/* Keymap definition of layers (array used by core) */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DVORAK]     = LAYOUT_wrapper(COMPOSE_LAYER(DVORAK)),
  [BONE]       = LAYOUT_wrapper(COMPOSE_LAYER(BONE)),
  [WIN_BONE]   = LAYOUT_wrapper(COMPOSE_LAYER(WIN_BONE)),
  [LOWER]      = LAYOUT_wrapper(COMPOSE_LAYER(LOWER)),
  [RAISE]      = LAYOUT_wrapper(COMPOSE_LAYER(RAISE)),
  [WIN_DVORAK] = LAYOUT_wrapper(COMPOSE_LAYER(WIN_DVORAK)),
  [WIN_RAISE]  = LAYOUT_wrapper(COMPOSE_LAYER(WIN_RAISE)),
  [ADJUST]     = LAYOUT_wrapper(COMPOSE_LAYER(ADJUST)),
};
