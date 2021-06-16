/* Copyright 2021 A. P. B. <mail@beyeran.site>
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

#pragma once
#include QMK_KEYBOARD_H

#include "keymap_german_osx.h"

enum layers {
  BNE,
  NEO,
  LOWER,
  RAISE,
  ADJUST
};

/*
 * OSX/Linux/Win agnostic keys.
 * Defines keys that are different between OSes. I'll be using these instead of standard ones for
 * non-OSX layouts.
 */
#define AGN_TILD ALGR(KC_RBRC)
#define AGN_EXLM S(KC_1)
#define AGN_AT   ALGR(KC_Q)
#define AGN_LCBR ALGR(KC_7)
#define AGN_RCBR ALGR(KC_9)
#define AGN_PIPE ALGR(KC_NUBS)
#define AGN_QUES S(KC_MINUS)
#define AGN_ASTR S(KC_RBRC)
#define AGN_SCLN S(KC_COMM)
#define AGN_QUOT S(KC_NUHS)
#define AGN_HASH KC_NUHS
#define AGN_DLR  S(KC_4)
#define AGN_LPRN S(KC_8)
#define AGN_RPRN S(KC_9)
#define AGN_SLSH S(KC_7)
#define AGN_EQL  S(KC_0)
#define AGN_PLUS KC_RBRC
#define AGN_COLN S(KC_DOT)
#define AGN_DQUO S(KC_2)
#define AGN_PERC S(KC_5)
#define AGN_CIRC KC_GRV
#define AGN_LBRC ALGR(KC_8)
#define AGN_RBRC ALGR(KC_0)
#define AGN_GRV  S(KC_EQL)
#define AGN_AMPR S(DE_6)
#define AGN_BSLS ALGR(KC_MINUS)
#define AGN_LABK KC_NUBS
#define AGN_RABK S(KC_NUBS)
#define AGN_UNDS S(DE_SLSH)
#define AGN_ACUT KC_EQL
#define AGN_MINS KC_SLSH

/*
 * Raise
 */

// Raise for OSX
#define ___RAISE_L1___ DE_ACUT, DE_UNDS, DE_LBRC, DE_RBRC, DE_LABK
#define ___RAISE_L2___ DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR
#define ___RAISE_L3___ DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV

#define ___RAISE_R1___ DE_EXLM, DE_CIRC, S(DE_CIRC), DE_EQL,  DE_AMPR
#define ___RAISE_R2___ DE_QUES, DE_LPRN, DE_RPRN,    DE_MINS, DE_COLN
#define ___RAISE_R3___ DE_PLUS, DE_PERC, DE_DQUO,    DE_QUOT, DE_SCLN

// Raise for WIN/Linux
#define ___WIN_RAISE_L1___ AGN_ACUT, AGN_UNDS, AGN_LBRC, AGN_RBRC, AGN_LABK
#define ___WIN_RAISE_L2___ AGN_BSLS, AGN_SLSH, AGN_LCBR, AGN_RCBR, AGN_ASTR
#define ___WIN_RAISE_L3___ AGN_HASH, AGN_DLR,  AGN_PIPE, AGN_TILD, AGN_GRV

#define ___WIN_RAISE_R1___ AGN_EXLM, AGN_CIRC, S(AGN_CIRC), AGN_EQL,  AGN_AMPR
#define ___WIN_RAISE_R2___ AGN_QUES, AGN_LPRN, AGN_RPRN,    AGN_MINS, AGN_COLN
#define ___WIN_RAISE_R3___ AGN_PLUS, AGN_PERC, AGN_DQUO,    AGN_QUOT, AGN_SCLN


/*
 * Lower
 */
#define ___LOWER_L1___ XXXXXXX, DE_7,    DE_8,    DE_9,    XXXXXXX
#define ___LOWER_L2___ DE_AT,   DE_4,    DE_5,    DE_6,    DE_0
#define ___LOWER_L3___ XXXXXXX, DE_1,    DE_2,    DE_3,    XXXXXXX

#define ___LOWER_R1___ DE_SS,   XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX
#define ___LOWER_R2___ XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX
#define ___LOWER_R3___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX


/*
 * Adjust
 */
#define ___ADJUST_L1___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ___ADJUST_L2___ TG(BNE), TG(NEO), XXXXXXX, XXXXXXX, XXXXXXX
#define ___ADJUST_L3___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define ___ADJUST_R1___ XXXXXXX,  XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX
#define ___ADJUST_R2___ XXXXXXX,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX
#define ___ADJUST_R3___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX


/*
 * NEO
 * See: https://www.neo-layout.org/
 */

// NEO home row modifier
#define NEO_L_GUI LGUI_T(DE_U)
#define NEO_L_ALT LALT_T(DE_I)
#define NEO_L_SFT LSFT_T(DE_A)
#define NEO_L_CTL LCTL_T(DE_E)

#define NEO_R_CTL RCTL_T(DE_N)
#define NEO_R_SFT RSFT_T(DE_R)
#define NEO_R_ALT LALT_T(DE_T)
#define NEO_R_GUI RGUI_T(DE_D)

// NEO base keys
#define ___NEO_L1___ DE_X,      DE_V,      DE_L,      DE_C,      DE_W
#define ___NEO_L2___ NEO_L_GUI, NEO_L_ALT, NEO_L_SFT, NEO_L_CTL, DE_O
#define ___NEO_L3___ DE_UDIA,   DE_ODIA,   DE_ADIA,   DE_P,      DE_Z

#define ___NEO_R1___ DE_K, DE_H,      DE_G,      DE_F,      DE_Q
#define ___NEO_R2___ DE_S, NEO_R_CTL, NEO_R_SFT, NEO_R_ALT, NEO_R_GUI
#define ___NEO_R3___ DE_B, DE_M,      DE_COMM,   DE_DOT,    DE_J


/*
 * Bone2
 *
 */

// Bone2 home row modifier
#define BONE_L_GUI LGUI_T(DE_C)
#define BONE_L_ALT LALT_T(DE_T)
#define BONE_L_SFT LSFT_T(DE_I)
#define BONE_L_CTL LCTL_T(DE_E)

#define BONE_R_CTL RCTL_T(DE_N)
#define BONE_R_SFT RSFT_T(DE_R)
#define BONE_R_ALT LALT_T(DE_S)
#define BONE_R_GUI RGUI_T(DE_G)

// Bone2 base keys
#define ___BNE_L1___ DE_J,       DE_D,       DE_U,       DE_A,       DE_X
#define ___BNE_L2___ BONE_L_GUI, BONE_L_ALT, BONE_L_SFT, BONE_L_CTL, DE_O
#define ___BNE_L3___ DE_F,       DE_V,       DE_ADIA,    DE_UDIA,    DE_ODIA

#define ___BNE_R1___ DE_P, DE_H,       DE_L,       DE_M,       DE_W
#define ___BNE_R2___ DE_B, BONE_R_CTL, BONE_L_SFT, BONE_L_ALT, BONE_L_GUI
#define ___BNE_R3___ DE_Y, DE_Z,       DE_COMM,    DE_DOT,     DE_K
