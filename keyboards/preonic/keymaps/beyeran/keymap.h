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
#include "keycodes.h"

/*
 * Universal Parts
 */
#define ___NEO_BORDER_R1___ KC_BSPC
#define ___NEO_BORDER_R2___ DE_SS
#define ___NEO_BORDER_R3___ DE_Y
#define ___NEO_BORDER_R4___ KC_ENT
#define ___NEO_BORDER_R5___ KC_CAPS

#define ___NEO_BORDER_L1___ KC_ESC
#define ___NEO_BORDER_L2___ KC_TAB
#define ___NEO_BORDER_L3___ XXXXXXX
#define ___NEO_BORDER_L4___ XXXXXXX
#define ___NEO_BORDER_L5___ KC_CAPS


#define ___STD_BORDER_R1___ XXXXXXX
#define ___STD_BORDER_R2___ XXXXXXX
#define ___STD_BORDER_R3___ XXXXXXX
#define ___STD_BORDER_R4___ XXXXXXX
#define ___STD_BORDER_R5___ XXXXXXX

#define ___STD_BORDER_L1___ XXXXXXX
#define ___STD_BORDER_L2___ XXXXXXX
#define ___STD_BORDER_L3___ XXXXXXX
#define ___STD_BORDER_L4___ XXXXXXX
#define ___STD_BORDER_L5___ XXXXXXX


#define ___BNE_BORDER_R1___ XXXXXXX
#define ___BNE_BORDER_R2___ XXXXXXX
#define ___BNE_BORDER_R3___ XXXXXXX
#define ___BNE_BORDER_R4___ XXXXXXX
#define ___BNE_BORDER_R5___ XXXXXXX

#define ___BNE_BORDER_L1___ XXXXXXX
#define ___BNE_BORDER_L2___ XXXXXXX
#define ___BNE_BORDER_L3___ XXXXXXX
#define ___BNE_BORDER_L4___ XXXXXXX
#define ___BNE_BORDER_L5___ XXXXXXX


#define ___RAISE_BORDER_R1___ XXXXXXX
#define ___RAISE_BORDER_R2___ XXXXXXX
#define ___RAISE_BORDER_R3___ XXXXXXX
#define ___RAISE_BORDER_R4___ XXXXXXX
#define ___RAISE_BORDER_R5___ XXXXXXX

#define ___RAISE_BORDER_L1___ XXXXXXX
#define ___RAISE_BORDER_L2___ XXXXXXX
#define ___RAISE_BORDER_L3___ XXXXXXX
#define ___RAISE_BORDER_L4___ XXXXXXX
#define ___RAISE_BORDER_L5___ XXXXXXX


#define ___LOWER_BORDER_R1___ XXXXXXX
#define ___LOWER_BORDER_R2___ XXXXXXX
#define ___LOWER_BORDER_R3___ XXXXXXX
#define ___LOWER_BORDER_R4___ XXXXXXX
#define ___LOWER_BORDER_R5___ XXXXXXX

#define ___LOWER_BORDER_L1___ XXXXXXX
#define ___LOWER_BORDER_L2___ XXXXXXX
#define ___LOWER_BORDER_L3___ XXXXXXX
#define ___LOWER_BORDER_L4___ XXXXXXX
#define ___LOWER_BORDER_L5___ XXXXXXX


#define ___ADJUST_BORDER_R1___ XXXXXXX
#define ___ADJUST_BORDER_R2___ XXXXXXX
#define ___ADJUST_BORDER_R3___ XXXXXXX
#define ___ADJUST_BORDER_R4___ XXXXXXX
#define ___ADJUST_BORDER_R5___ XXXXXXX

#define ___ADJUST_BORDER_L1___ RESET
#define ___ADJUST_BORDER_L2___ TG(STD)
#define ___ADJUST_BORDER_L3___ TG(BNE)
#define ___ADJUST_BORDER_L4___ TG(NEO)
#define ___ADJUST_BORDER_L5___ XXXXXXX


#define ___BOTTOM___ MO(ADJUST), XXXXXXX, XXXXXXX, \
    MO(LOWER), KC_SPC, KC_SPC, MO(RAISE),          \
    XXXXXXX, XXXXXXX, XXXXXXX

#define ___NEO_BOTTOM___    ___BOTTOM___
#define ___STD_BOTTOM___    ___BOTTOM___
#define ___BNE_BOTTOM___    ___BOTTOM___
#define ___LOWER_BOTTOM___  ___BOTTOM___
#define ___RAISE_BOTTOM___  ___BOTTOM___
#define ___ADJUST_BOTTOM___ ___BOTTOM___


#define ___TOP___ KC_1, KC_2, KC_3, KC_4, KC_5, \
    KC_6, KC_7, KC_8, KC_9, KC_0

#define ___NEO_TOP___    ___TOP___
#define ___STD_TOP___    ___TOP___
#define ___BNE_TOP___    ___TOP___
#define ___LOWER_TOP___  ___TOP___
#define ___RAISE_TOP___  ___TOP___
#define ___ADJUST_TOP___ ___TOP___
