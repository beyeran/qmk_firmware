#include QMK_KEYBOARD_H

#include <stdio.h>
#include "keymap.h"
#include "oled.h"
#include "logo.h"

#ifndef MIN
#   define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#endif
#ifndef MAX
#   define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#endif

void render_status(void) {
    oled_write_P(PSTR("Kyria rev1.3\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
    case NEO2:
      oled_write_P(PSTR("NEO2\n"), false);
      break;
    case STANNI:
      oled_write_P(PSTR("Standard\n"), false);
      break;
    case WIN_RAISE:
      oled_write_P(PSTR("WIN Raise\n"), false);
      break;
    case BONE:
      oled_write_P(PSTR("Bone\n"), false);
      break;
    case WIN_BONE:
      oled_write_P(PSTR("WIN Bone\n"), false);
      break;
    case LOWER:
      oled_write_P(PSTR("Lower\n"), false);
      break;
    case RAISE:
      oled_write_P(PSTR("Raise\n"), false);
      break;
    case ADJUST:
      oled_write_P(PSTR("Adjust\n"), false);
      break;
    default:
      oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_180;
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    render_status();
    oled_write_P(PSTR("\n"), false);
  } else {
    render_logo();
  }
}
