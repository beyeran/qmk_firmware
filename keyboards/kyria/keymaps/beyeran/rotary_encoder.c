#include QMK_KEYBOARD_H

#include "rotary_encoder.h"
#include <stdbool.h>

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_PGDN);
    } else {
      tap_code(KC_PGUP);
    }
  } else if (index == 1) {
    if (clockwise) {
      tap_code16(C(KC_TAB));
    } else {
      tap_code16(S(C(KC_TAB)));
    }
  }

  return true;
}
