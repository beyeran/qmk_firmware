#include QMK_KEYBOARD_H

#include "encoder.h"

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
          tap_code(KC_DOWN);
        } else {
          tap_code(KC_UP);
        }
    }
}
#endif
