#pragma once
#include QMK_KEYBOARD_H

#include "keymap_german_osx.h"

enum layers {
  DVORAK,
  BONE,
  LOWER,
  RAISE,
  ADJUST,
};

enum custom_keycodes {
  POMODORO_TOGGLE = SAFE_RANGE
};


// Home row modifier setup
#define GUI_A LGUI_T(DE_A)
#define GUI_C LGUI_T(DE_C)

#define ALT_S LALT_T(DE_S)
#define ALT_O LALT_T(DE_O)
#define ALTT2 LALT_T(DE_T)

#define SFT_D LSFT_T(DE_D)
#define SFT_E LSFT_T(DE_E)
#define SFT_I LSFT_T(DE_I)

#define CTL_F LCTL_T(DE_F)
#define CTL_U LCTL_T(DE_U)
#define CTL_E LCTL_T(DE_E)

#define CTL_J RCTL_T(DE_J)
#define CTL_H RCTL_T(DE_H)
#define CTL_N RCTL_T(DE_N)

#define SF2_K RSFT_T(DE_K)
#define SF2_T RSFT_T(DE_T)
#define SF2_R RSFT_T(DE_R)

#define ALT_L LALT_T(DE_L)
#define ALT_N LALT_T(DE_N)
#define ALT_S LALT_T(DE_S)

#define GUI_OE RGUI_T(DE_OE)
#define GUI_S  RGUI_T(DE_S)
#define GUI_G  RGUI_T(DE_G)


//// Universal Parts
#define APB_R11 KC_ESC
#define APB_R1E KC_BSPC
#define APB_R21 DE_MINS
#define APB_R31 DE_DQUO
#define APB_R3E DE_COLN


//// Alphas
// Dvorak
#define DVORAK_ROW1_LEFT APB_R11, DE_AE, DE_COMM, DE_DOT, DE_P,  DE_Y,
#define DVORAK_ROW2_LEFT APB_R21, GUI_A, ALT_O,   SFT_E,  CTL_U, DE_I,
#define DVORAK_ROW3_LEFT APB_R31, DE_OE, DE_Q,    DE_J,   DE_K,  DE_X,

#define DVORAK_ROW1_RIGHT DE_F, DE_G,  DE_C,   DE_R,  DE_L, APB_R1E,
#define DVORAK_ROW2_RIGHT DE_D, CTL_H, SF2_T, ALT_N, GUI_S, KC_TAB,
#define DVORAK_ROW3_RIGHT DE_B, DE_M,  DE_W,   DE_V,  DE_Z, APB_R3E,

#define DVORAK_THUMB_ROW1_LEFT DE_UNDS, KC_CAPS,
#define DVORAK_THUMB_ROW2_LEFT _______, KC_BSPC, MO(LOWER),  KC_ENT, KC_SPC,

#define DVORAK_THUMB_ROW1_RIGHT DE_CIRC, KC_CAPS,
#define DVORAK_THUMB_ROW2_RIGHT KC_BSPC, KC_SPC,  MO(RAISE), KC_BSPC, _______

// Bone
#define BONE_ROW1_LEFT APB_R11, DE_J,  DE_D,  DE_U,  DE_A,  DE_X,
#define BONE_ROW2_LEFT APB_R21, GUI_C, ALTT2, SFT_I, CTL_E, DE_O,
#define BONE_ROW3_LEFT APB_R31, DE_F,  DE_V,  DE_AE, DE_AE, DE_OE,

#define BONE_ROW1_RIGHT DE_P, DE_H,  DE_L,   DE_M,    DE_W,  APB_R1E,
#define BONE_ROW2_RIGHT DE_B, CTL_N, SF2_R,  ALT_S,   GUI_G, DE_Q,
#define BONE_ROW3_RIGHT DE_Y, DE_Z,  DE_DOT, DE_COMM, DE_K,  APB_R3E,

#define BONE_THUMB_ROW1_LEFT DE_UNDS, KC_CAPS,
#define BONE_THUMB_ROW2_LEFT _______, KC_BSPC, MO(LOWER),  KC_ENT, KC_SPC,

#define BONE_THUMB_ROW1_RIGHT KC_CAPS, DE_CIRC,
#define BONE_THUMB_ROW2_RIGHT KC_ENT,  KC_SPC, MO(RAISE), KC_BSPC, _______

//// Raise
#define RAISE_ROW1_LEFT DE_TILD, DE_EXLM, DE_AT,   DE_LCBR, DE_RCBR, DE_PIPE,
#define RAISE_ROW2_LEFT DE_QUOT, DE_HASH, DE_DLR,  DE_LPRN, DE_RPRN, DE_SLSH,
#define RAISE_ROW3_LEFT DE_DQUO, DE_PERC, DE_CIRC, DE_LBRC, DE_RBRC, DE_GRV,

#define RAISE_ROW1_RIGHT DE_QUES, KC_7, KC_8, KC_9, DE_ASTR, DE_SCLN,
#define RAISE_ROW2_RIGHT DE_EQL,  KC_4, KC_5, KC_6, DE_PLUS, DE_COLN,
#define RAISE_ROW3_RIGHT DE_AMPR, KC_1, KC_2, KC_3, DE_BSLS, DE_CIRC,

#define RAISE_THUMB_ROW1_LEFT _______, _______,
#define RAISE_THUMB_ROW2_LEFT _______, _______, _______, _______, _______,

#define RAISE_THUMB_ROW1_RIGHT _______, _______,
#define RAISE_THUMB_ROW2_RIGHT _______, _______, _______, KC_0, _______

//// Lower
#define LOWER_ROW1_LEFT _______, _______, _______, _______, _______, _______,
#define LOWER_ROW2_LEFT _______, _______, _______, _______, _______, _______,
#define LOWER_ROW3_LEFT _______, _______, _______, _______, _______, _______,

#define LOWER_ROW1_RIGHT _______, _______, KC_UP,   _______, _______, _______,
#define LOWER_ROW2_RIGHT _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
#define LOWER_ROW3_RIGHT _______, _______, _______, _______, _______, _______,

#define LOWER_THUMB_ROW1_LEFT _______, _______,
#define LOWER_THUMB_ROW2_LEFT _______, _______, _______, _______, _______,

#define LOWER_THUMB_ROW1_RIGHT _______, _______,
#define LOWER_THUMB_ROW2_RIGHT _______, _______, _______, _______, _______

//// Adjust
#define ADJUST_ROW1_LEFT _______, _______,  _______,    _______, _______, _______,
#define ADJUST_ROW2_LEFT _______, TG(BONE), TG(DVORAK), _______, _______, _______,
#define ADJUST_ROW3_LEFT _______, _______,  _______,    _______, _______, _______,

#define ADJUST_ROW1_RIGHT _______, _______, KC_UP,   _______, _______, _______,
#define ADJUST_ROW2_RIGHT _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
#define ADJUST_ROW3_RIGHT _______, _______, _______, _______, _______, _______,

#define ADJUST_THUMB_ROW1_LEFT _______, _______,
#define ADJUST_THUMB_ROW2_LEFT _______, _______, _______, _______, _______,

#define ADJUST_THUMB_ROW1_RIGHT _______, _______,
#define ADJUST_THUMB_ROW2_RIGHT _______, _______, _______, _______, _______
