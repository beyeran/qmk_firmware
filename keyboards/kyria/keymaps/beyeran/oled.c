#include QMK_KEYBOARD_H

#include <stdio.h>
#include "keymap.h"
#include "oled.h"

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
    case DVORAK:
      oled_write_P(PSTR("Dvorak\n"), false);
      break;
    case WIN_DVORAK:
      oled_write_P(PSTR("WIN Dvorak\n"), false);
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

#define POMODORO_TIMER 25
#define CELL_SIZE 3
#define NB_ROWS (OLED_DISPLAY_HEIGHT / 8 / CELL_SIZE)
#define NB_COLS (OLED_DISPLAY_WIDTH / CELL_SIZE)
#define NB_MS_BY_PIXEL ((POMODORO_TIMER * 60L * 1000) / (8 * NB_ROWS * NB_COLS));

// static bool previous_pomodoro_reint_state;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_180;
}

volatile uint16_t frame_timer = 0;

void reset_pomodoro(void) {
  frame_timer = timer_read();
}

void init_pomodoro(void) {
  frame_timer = timer_read();
}

void render_pomodoro(void) {
  char pomodoro_str[15];
  uint16_t time_s = timer_elapsed(frame_timer);

  sprintf(pomodoro_str, "Timer: %02u:%02u", time_s / 60, time_s % 60);
  oled_write(pomodoro_str, false);

  if (time_s < 0 || time_s > (POMODORO_TIMER * 60L * 1000)) {
    init_pomodoro();
  }
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    render_status();
    oled_write_P(PSTR("\n"), false);
    // render_pomodoro();
  } else {
    oled_write_P(PSTR("No logo to see.\n"), false);
  }
}
