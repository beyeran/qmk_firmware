/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"
#include "keymap_german.h"

#define KC_APE LALT(LCTL(KC_DEL))

#define M_TILD A(DE_N)
#define M_EXLM S(DE_1)
#define M_AT   A(DE_L)
#define M_LCBR A(DE_8)
#define M_RCBR A(DE_9)
#define M_PIPE A(DE_7)
#define M_QUES S(DE_SS)
#define M_ASTR S(DE_PLUS)
#define M_SCLN S(DE_COMM)
#define M_QUOT S(DE_HASH)
#define M_HASH KC_NUHS
#define M_DLR  S(DE_4)
#define M_LPRN S(DE_8)
#define M_RPRN S(DE_9)
#define M_SLSH S(DE_7)
#define M_EQL  S(DE_0)
#define M_PLUS KC_RBRC
#define M_COLN S(DE_DOT)
#define M_DQOT S(DE_2)
#define M_PERC S(DE_5)
#define M_CIRC KC_GRV
#define M_LBRC A(DE_5)
#define M_RBRC A(DE_6)
#define M_GRV  S(DE_ACUT)
#define M_AMPR S(DE_6)
#define M_BSLS S(A(DE_7))
#define M_LABK S(DE_LABK)
#define M_RABK S(DE_RABK)

// Home row modifier setup
#define GUI_A LGUI_T(DE_A)
#define ALT_O LALT_T(DE_O)
#define SFT_E LSFT_T(DE_E)
#define CTL_F LCTL_T(DE_U)

#define CTL_H RCTL_T(DE_H)
#define SF2_T RSFT_T(DE_T)
#define ALT_N LALT_T(DE_N)
#define GUI_S RGUI_T(DE_S)


enum preonic_layers {
  _QWERTY,
  _BONE2,
  _DVORAK,
  _MDVORAK,
  _MRAISE,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  BONE2,
  DVORAK,
  MDVORAK,
  MRAISE,
  LOWER,
  RAISE,
  BACKLIT
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_preonic_grid(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RSFT,
  KC_GRV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_BONE2] = LAYOUT_preonic_grid(
  KC_ESC,  KC_7,    KC_5,    KC_3,    KC_1,    KC_9,    KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    KC_BSPC,
  KC_TAB,  KC_J,    KC_D,    KC_U,    KC_A,    KC_X,    KC_P,    KC_H,    KC_L,    KC_M,    KC_W,    KC_ENT,
  KC_GRV,  KC_C,    KC_T,    KC_I,    KC_E,    KC_O,    KC_B,    KC_N,    KC_R,    KC_S,    KC_G,    KC_Q,
  KC_LSFT, KC_F,    KC_V,    KC_LBRC, KC_QUOT, KC_SCLN, KC_Y,    KC_Z,    KC_COMM, KC_DOT,  KC_K,    KC_RSFT,
  BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_DVORAK] = LAYOUT_preonic_grid(
  KC_ESC,  KC_7,    KC_5,    KC_3,    KC_1,    KC_9,    KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    KC_BSPC,
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Z,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_ENT,
  KC_GRV,  GUI_A,   ALT_O,   SFT_E,   CTL_F,   KC_I,    KC_D,    CTL_H,   SF2_T,   ALT_N,   GUI_S,   KC_SLSH,
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Y,    KC_RSFT,
  KC_CAPS, KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_RALT, KC_RGUI, KC_RCTL, KC_RSPC
),

[_MDVORAK] = LAYOUT_preonic_grid(
  KC_ESC,  KC_7,    KC_5,    KC_3,    KC_1,    KC_9,    KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    KC_BSPC,
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Z,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_ENT,
  KC_ESC,  GUI_A,   ALT_O,   SFT_E,   CTL_F,   KC_I,    KC_D,    CTL_H,   SF2_T,   ALT_N,   GUI_S,   KC_SLSH,
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Y,    KC_RSFT,
  KC_CAPS, KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_SPC,  KC_SPC,  MRAISE,  KC_RALT, KC_RGUI, KC_RCTL, KC_RSPC
),

[_RAISE] = LAYOUT_preonic_grid(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10,  KC_F11,  KC_F12,
    DE_TILD, DE_EXLM, DE_AT,   DE_LCBR, DE_RCBR, DE_PIPE, DE_QUES, KC_7,    KC_8,  KC_9,    DE_ASTR, DE_SCLN,
    DE_QUOT, DE_HASH, DE_DLR,  DE_LPRN, DE_RPRN, DE_SLSH, DE_EQL,  KC_4,    KC_5,  KC_6,    DE_PLUS, DE_COLN,
    DE_DQOT, DE_PERC, DE_CIRC, DE_LBRC, DE_RBRC, DE_GRV,  DE_AMPR, KC_1,    KC_2,  KC_3,    DE_BSLS, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_0,  _______, _______, _______
),

[_MRAISE] = LAYOUT_preonic_grid(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10,  KC_F11,  KC_F12,
    M_TILD,  M_EXLM,  M_AT,    M_LCBR,  M_RCBR,  M_PIPE,  M_QUES,  KC_7,    KC_8,  KC_9,    M_ASTR,  M_SCLN,
    M_QUOT,  M_HASH,  M_DLR,   M_LPRN,  M_RPRN,  M_SLSH,  M_EQL,   KC_4,    KC_5,  KC_6,    M_PLUS,  M_COLN,
    M_DQOT,  M_PERC,  M_CIRC,  M_LBRC,  M_RBRC,  M_GRV,   M_AMPR,  KC_1,    KC_2,  KC_3,    M_BSLS,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_0,  _______, _______, _______
),

[_LOWER] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, DE_LABK, DE_RABK, _______, _______, _______, KC_UP,   _______, _______, KC_APE,
    _______, DE_AE,   DE_UE,   DE_OE,   DE_SS,   _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

[_ADJUST] = LAYOUT_preonic_grid(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF,_______, _______, KC_DEL,
  _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  BONE2,   DVORAK,  MDVORAK, _______,
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QWERTY:
    if (record->event.pressed) {
      persistent_default_layer_set(1UL<<_QWERTY);
    }
    SEND_STRING(SS_TAP(X_F15));
    return false;
    break;
  case BONE2:
    if (record->event.pressed) {
      persistent_default_layer_set(1UL<<_BONE2);
    }
    SEND_STRING(SS_TAP(X_F16));
    return false;
    break;
  case DVORAK:
    if (record->event.pressed) {
      persistent_default_layer_set(1UL<<_DVORAK);
    }
    SEND_STRING(SS_TAP(X_F17));
    return false;
    break;
  case MDVORAK:
    if (record->event.pressed) {
      persistent_default_layer_set(1UL<<_MDVORAK);
    }
    SEND_STRING(SS_TAP(X_F18));
    return false;
    break;
  case LOWER:
    if (record->event.pressed) {
      layer_on(_LOWER);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    } else {
      layer_off(_LOWER);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    }
    return false;
    break;
  case RAISE:
    if (record->event.pressed) {
      layer_on(_RAISE);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    } else {
      layer_off(_RAISE);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    }
    return false;
    break;
  case MRAISE:
    if (record->event.pressed) {
      layer_on(_MRAISE);
      update_tri_layer(_LOWER, _MRAISE, _ADJUST);
    } else {
      layer_off(_MRAISE);
      update_tri_layer(_LOWER, _MRAISE, _ADJUST);
    }
    return false;
    break;
  case BACKLIT:
    return true;
    break;
  default:
    return true;
  }
};
