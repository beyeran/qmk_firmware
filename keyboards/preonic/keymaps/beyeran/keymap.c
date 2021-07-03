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
#include "keycodes.h"


#define CONC_KEY(id, name) ___ ## id ## _ ## name ## ___

#define COMPOSE_LAYER(id) \
  CONC_KEY(id, BORDER_L1), CONC_KEY(id, TOP), CONC_KEY(id, BORDER_R1),  \
    CONC_KEY(id, BORDER_L2), CONC_KEY(id, L1), CONC_KEY(id, R1), CONC_KEY(id, BORDER_R2), \
    CONC_KEY(id, BORDER_L3), CONC_KEY(id, L2), CONC_KEY(id, R2), CONC_KEY(id, BORDER_R3), \
    CONC_KEY(id, BORDER_L4), CONC_KEY(id, L3), CONC_KEY(id, R3), CONC_KEY(id, BORDER_R4), \
    CONC_KEY(id, BORDER_L5), CONC_KEY(id, BOTTOM), CONC_KEY(id, BORDER_R5)

#define LAYOUT_wrapper(...) LAYOUT_preonic_grid(__VA_ARGS__)

/* Keymap definition of layers (array used by core) */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BNE]    = LAYOUT_wrapper(COMPOSE_LAYER(NEO)),
  [NEO]    = LAYOUT_wrapper(COMPOSE_LAYER(BNE)),
  [STD]    = LAYOUT_wrapper(COMPOSE_LAYER(STD)),
  [LOWER]  = LAYOUT_wrapper(COMPOSE_LAYER(LOWER)),
  [RAISE]  = LAYOUT_wrapper(COMPOSE_LAYER(RAISE)),
  [ADJUST] = LAYOUT_wrapper(COMPOSE_LAYER(ADJUST)),
};
