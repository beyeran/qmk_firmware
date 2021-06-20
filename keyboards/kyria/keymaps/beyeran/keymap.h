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
#define ___NEO_BORDER_R1___ XXXXXXX
#define ___NEO_BORDER_R2___ XXXXXXX
#define ___NEO_BORDER_R3___ XXXXXXX
#define ___NEO_BORDER_L1___ XXXXXXX
#define ___NEO_BORDER_L2___ XXXXXXX
#define ___NEO_BORDER_L3___ XXXXXXX


#define ___STD_BORDER_R1___ XXXXXXX
#define ___STD_BORDER_R2___ XXXXXXX
#define ___STD_BORDER_R3___ XXXXXXX
#define ___STD_BORDER_L1___ XXXXXXX
#define ___STD_BORDER_L2___ XXXXXXX
#define ___STD_BORDER_L3___ XXXXXXX


#define ___BNE_BORDER_R1___ XXXXXXX
#define ___BNE_BORDER_R2___ DE_Q
#define ___BNE_BORDER_R3___ XXXXXXX
#define ___BNE_BORDER_L1___ XXXXXXX
#define ___BNE_BORDER_L2___ XXXXXXX
#define ___BNE_BORDER_L3___ XXXXXXX


#define ___LOWER_BORDER_R1___ XXXXXXX
#define ___LOWER_BORDER_R2___ XXXXXXX
#define ___LOWER_BORDER_R3___ XXXXXXX
#define ___LOWER_BORDER_L1___ XXXXXXX
#define ___LOWER_BORDER_L2___ XXXXXXX
#define ___LOWER_BORDER_L3___ XXXXXXX


#define ___RAISE_BORDER_R1___ XXXXXXX
#define ___RAISE_BORDER_R2___ XXXXXXX
#define ___RAISE_BORDER_R3___ XXXXXXX
#define ___RAISE_BORDER_L1___ XXXXXXX
#define ___RAISE_BORDER_L2___ XXXXXXX
#define ___RAISE_BORDER_L3___ XXXXXXX


#define ___ADJUST_BORDER_R1___ XXXXXXX
#define ___ADJUST_BORDER_R2___ XXXXXXX
#define ___ADJUST_BORDER_R3___ XXXXXXX
#define ___ADJUST_BORDER_L1___ XXXXXXX
#define ___ADJUST_BORDER_L2___ XXXXXXX
#define ___ADJUST_BORDER_L3___ XXXXXXX


/*
 * NEO thumbs
 */
#define ___NEO_THMB_L1___ DE_UNDS, KC_CAPS
#define ___NEO_THMB_L2___ KC_ENT,  KC_TAB, MO(LOWER),  KC_SPC, KC_ESC

#define ___NEO_THMB_R1___ MO(ADJUST), KC_CAPS
#define ___NEO_THMB_R2___ KC_ENT,     KC_BSPC, MO(RAISE), KC_TAB, KC_TAB


/*
 * Standard thumbs
 */
#define ___STD_THMB_L1___ DE_UNDS, KC_CAPS
#define ___STD_THMB_L2___ KC_ENT,  KC_TAB, MO(LOWER),  KC_SPC, KC_ESC

#define ___STD_THMB_R1___ MO(ADJUST), KC_CAPS
#define ___STD_THMB_R2___ KC_ENT,     KC_BSPC, MO(RAISE), KC_TAB, KC_TAB


/*
 * Bone thumbs
 */
#define ___BNE_THMB_L1___ DE_UNDS, KC_CAPS
#define ___BNE_THMB_L2___ KC_ENT,  KC_TAB, MO(LOWER),  KC_SPC, KC_ESC

#define ___BNE_THMB_R1___ MO(ADJUST), KC_CAPS
#define ___BNE_THMB_R2___ KC_ENT,     KC_BSPC, MO(RAISE), KC_TAB, KC_TAB


/*
 * Raise thumbs
 */
#define ___RAISE_THMB_L1___ XXXXXXX, XXXXXXX
#define ___RAISE_THMB_L2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define ___RAISE_THMB_R1___ XXXXXXX, XXXXXXX
#define ___RAISE_THMB_R2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX


/*
 * Lower
 */
#define ___LOWER_THMB_L1___ XXXXXXX, XXXXXXX
#define ___LOWER_THMB_L2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define ___LOWER_THMB_R1___ XXXXXXX, XXXXXXX
#define ___LOWER_THMB_R2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX


/*
 * Adjust
 */
#define ___ADJUST_THMB_L1___ XXXXXXX, XXXXXXX
#define ___ADJUST_THMB_L2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define ___ADJUST_THMB_R1___ XXXXXXX, XXXXXXX
#define ___ADJUST_THMB_R2___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
