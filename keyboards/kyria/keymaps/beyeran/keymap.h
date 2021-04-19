#pragma once
#include QMK_KEYBOARD_H

#include "keymap_german_osx.h"

enum layers {
  DVORAK,
  WIN_DVORAK,
  BONE,
  WIN_BONE,
  LOWER,
  RAISE,
  WIN_RAISE,
  ADJUST
};

enum custom_keycodes {
  POMODORO_TOGGLE = SAFE_RANGE
};

// "Localization" for win
#define W_TILD ALGR(KC_RBRC)
#define W_EXLM S(KC_1)
#define W_AT   ALGR(KC_Q)
#define W_LCBR ALGR(KC_7)
#define W_RCBR ALGR(KC_9)
#define W_PIPE ALGR(KC_NUBS)
#define W_QUES S(KC_MINUS)
#define W_ASTR S(KC_RBRC)
#define W_SCLN S(KC_COMM)
#define W_QUOT S(KC_NUHS)
#define W_HASH KC_NUHS
#define W_DLR  S(KC_4)
#define W_LPRN S(KC_8)
#define W_RPRN S(KC_9)
#define W_SLSH S(KC_7)
#define W_EQL  S(KC_0)
#define W_PLUS KC_RBRC
#define W_COLN S(KC_DOT)
#define W_DQUO S(KC_2)
#define W_PERC S(KC_5)
#define W_CIRC KC_GRV
#define W_LBRC ALGR(KC_8)
#define W_RBRC ALGR(KC_0)
#define W_GRV  S(KC_EQL)
#define W_AMPR S(DE_6)
#define W_BSLS ALGR(KC_MINUS)
#define W_LABK KC_NUBS
#define W_RABK S(KC_NUBS)
#define W_UNDS S(DE_SLSH)
#define W_ACUT KC_EQL
#define W_MINS KC_SLSH

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

#define DVORAK_THUMB_ROW1_RIGHT MO(ADJUST), KC_CAPS,
#define DVORAK_THUMB_ROW2_RIGHT KC_BSPC,    KC_SPC,  MO(RAISE), KC_BSPC, _______


#define WIN_DVORAK_ROW1_LEFT DVORAK_ROW1_LEFT
#define WIN_DVORAK_ROW2_LEFT DVORAK_ROW2_LEFT
#define WIN_DVORAK_ROW3_LEFT DVORAK_ROW3_LEFT

#define WIN_DVORAK_ROW1_RIGHT DVORAK_ROW1_RIGHT
#define WIN_DVORAK_ROW2_RIGHT DVORAK_ROW2_RIGHT
#define WIN_DVORAK_ROW3_RIGHT DVORAK_ROW3_RIGHT

#define WIN_DVORAK_THUMB_ROW1_LEFT DE_UNDS, KC_CAPS,
#define WIN_DVORAK_THUMB_ROW2_LEFT _______, KC_TAB, MO(LOWER),  KC_ENT, KC_SPC,

#define WIN_DVORAK_THUMB_ROW1_RIGHT MO(ADJUST), KC_CAPS,
#define WIN_DVORAK_THUMB_ROW2_RIGHT KC_BSPC,    KC_SPC,  MO(WIN_RAISE), KC_TAB, _______


// Bone
#define BONE_ROW1_LEFT APB_R11, DE_J,  DE_D,  DE_U,    DE_A,    DE_X,
#define BONE_ROW2_LEFT APB_R21, GUI_C, ALTT2, SFT_I,   CTL_E,   DE_O,
#define BONE_ROW3_LEFT APB_R31, DE_F,  DE_V,  DE_ADIA, DE_UDIA, DE_ODIA,

#define BONE_ROW1_RIGHT DE_P, DE_H,  DE_L,   DE_M,    DE_W,  APB_R1E,
#define BONE_ROW2_RIGHT DE_B, CTL_N, SF2_R,  ALT_S,   GUI_G, DE_Q,
#define BONE_ROW3_RIGHT DE_Y, DE_Z,  DE_COMM, DE_DOT, DE_K,  APB_R3E,

#define BONE_THUMB_ROW1_LEFT DE_UNDS, KC_CAPS,
#define BONE_THUMB_ROW2_LEFT _______, KC_TAB, MO(LOWER),  KC_ENT, KC_SPC,

#define BONE_THUMB_ROW1_RIGHT MO(ADJUST), KC_CAPS,
#define BONE_THUMB_ROW2_RIGHT KC_ENT,     KC_SPC, MO(RAISE), KC_TAB, _______

// Bone
#define WIN_BONE_ROW1_LEFT BONE_ROW1_LEFT
#define WIN_BONE_ROW2_LEFT BONE_ROW2_LEFT
#define WIN_BONE_ROW3_LEFT BONE_ROW3_LEFT

#define WIN_BONE_ROW1_RIGHT BONE_ROW1_RIGHT
#define WIN_BONE_ROW2_RIGHT BONE_ROW2_RIGHT
#define WIN_BONE_ROW3_RIGHT BONE_ROW3_RIGHT

#define WIN_BONE_THUMB_ROW1_LEFT BONE_THUMB_ROW1_LEFT
#define WIN_BONE_THUMB_ROW2_LEFT BONE_THUMB_ROW2_LEFT

#define WIN_BONE_THUMB_ROW1_RIGHT MO(ADJUST), KC_CAPS,
#define WIN_BONE_THUMB_ROW2_RIGHT KC_ENT,     KC_SPC, MO(WIN_RAISE), KC_TAB, _______


//// Raise
#define RAISE_ROW1_LEFT XXXXXXX, DE_ACUT, DE_UNDS, DE_LBRC, DE_RBRC, DE_LABK,
#define RAISE_ROW2_LEFT XXXXXXX, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,
#define RAISE_ROW3_LEFT XXXXXXX, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,

#define RAISE_ROW1_RIGHT DE_EXLM, DE_CIRC, S(DE_CIRC), DE_EQL,  DE_AMPR, XXXXXXX,
#define RAISE_ROW2_RIGHT DE_QUES, DE_LPRN, DE_RPRN,    DE_MINS, DE_COLN, DE_AT,
#define RAISE_ROW3_RIGHT DE_PLUS, DE_PERC, DE_DQUO,    DE_QUOT, DE_SCLN, XXXXXXX,

#define RAISE_THUMB_ROW1_LEFT _______, _______,
#define RAISE_THUMB_ROW2_LEFT _______, _______, _______, _______, _______,

#define RAISE_THUMB_ROW1_RIGHT _______, _______,
#define RAISE_THUMB_ROW2_RIGHT _______, _______, _______, _______, _______


#define WIN_RAISE_ROW1_LEFT XXXXXXX, W_ACUT, W_UNDS, W_LBRC, W_RBRC, W_LABK,
#define WIN_RAISE_ROW2_LEFT XXXXXXX, W_BSLS, W_SLSH, W_LCBR, W_RCBR, W_ASTR,
#define WIN_RAISE_ROW3_LEFT XXXXXXX, W_HASH, W_DLR,  W_PIPE, W_TILD, W_GRV,

#define WIN_RAISE_ROW1_RIGHT W_EXLM, W_CIRC, S(W_CIRC), W_EQL,  W_AMPR, XXXXXXX,
#define WIN_RAISE_ROW2_RIGHT W_QUES, W_LPRN, W_RPRN,    W_MINS, W_COLN, W_AT,
#define WIN_RAISE_ROW3_RIGHT W_PLUS, W_PERC, W_DQUO,    W_QUOT, W_SCLN, XXXXXXX,

#define WIN_RAISE_THUMB_ROW1_LEFT RAISE_THUMB_ROW1_LEFT
#define WIN_RAISE_THUMB_ROW2_LEFT RAISE_THUMB_ROW2_LEFT

#define WIN_RAISE_THUMB_ROW1_RIGHT RAISE_THUMB_ROW1_RIGHT
#define WIN_RAISE_THUMB_ROW2_RIGHT RAISE_THUMB_ROW2_RIGHT


//// Lower
#define LOWER_ROW1_LEFT _______, _______, DE_7, DE_8, DE_9, _______,
#define LOWER_ROW2_LEFT _______, _______, DE_4, DE_5, DE_6, _______,
#define LOWER_ROW3_LEFT _______, _______, DE_1, DE_2, DE_3, _______,

#define LOWER_ROW1_RIGHT _______, _______, KC_UP,   _______, _______, _______,
#define LOWER_ROW2_RIGHT _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
#define LOWER_ROW3_RIGHT _______, _______, _______, _______, _______, _______,

#define LOWER_THUMB_ROW1_LEFT _______, _______,
#define LOWER_THUMB_ROW2_LEFT _______, DE_0,    _______, _______, _______,

#define LOWER_THUMB_ROW1_RIGHT _______, _______,
#define LOWER_THUMB_ROW2_RIGHT _______, _______, _______, _______, _______

//// Adjust
#define ADJUST_ROW1_LEFT _______, TG(WIN_BONE), TG(WIN_DVORAK), _______, _______, POMODORO_TOGGLE,
#define ADJUST_ROW2_LEFT _______, TG(BONE),     TG(DVORAK),     _______, _______, _______,
#define ADJUST_ROW3_LEFT _______, _______,      _______,        _______, _______, _______,

#define ADJUST_ROW1_RIGHT _______, _______, KC_UP,   _______, _______, _______,
#define ADJUST_ROW2_RIGHT _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
#define ADJUST_ROW3_RIGHT _______, _______, _______, _______, _______, _______,

#define ADJUST_THUMB_ROW1_LEFT _______, _______,
#define ADJUST_THUMB_ROW2_LEFT _______, _______, _______, _______, _______,

#define ADJUST_THUMB_ROW1_RIGHT _______, _______,
#define ADJUST_THUMB_ROW2_RIGHT _______, _______, _______, _______, _______
