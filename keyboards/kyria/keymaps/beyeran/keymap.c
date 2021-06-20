/* Copyright 2021 A.P.B. <mail@beyeran.site>
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

#include "keycodes.h"


#define CONCAT(id, name) ___ ## id ## _ ## name ## ___

#define COMPOSE_LAYER(id)                                               \
    CONCAT(id, BORDER_L1), CONCAT(id, L1),                                           CONCAT(id, R1), CONCAT(id, BORDER_R1), \
    CONCAT(id, BORDER_L2), CONCAT(id, L2),                                           CONCAT(id, R2), CONCAT(id, BORDER_R2), \
    CONCAT(id, BORDER_L3), CONCAT(id, L3), CONCAT(id, THMB_L1), CONCAT(id, THMB_R1), CONCAT(id, R3), CONCAT(id, BORDER_R3), \
                                           CONCAT(id, THMB_L2), CONCAT(id, THMB_R2)

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)


/* Keymap definition of layers (array used by core) */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BNE]    = LAYOUT_wrapper(COMPOSE_LAYER(BNE)),
  [NEO]    = LAYOUT_wrapper(COMPOSE_LAYER(NEO)),
  [STD]    = LAYOUT_wrapper(COMPOSE_LAYER(STD)),
  [LOWER]  = LAYOUT_wrapper(COMPOSE_LAYER(LOWER)),
  [RAISE]  = LAYOUT_wrapper(COMPOSE_LAYER(RAISE)),
  [ADJUST] = LAYOUT_wrapper(COMPOSE_LAYER(ADJUST)),
};
