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


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_180;
}

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

/* Write a char of cells to OLED
Similar function to the one in oled_gfx_game_life but as it is dependant to CELL_SIZE that may not be equals, need to be redefined
*/
static void write_char_cells_oled(const char value, const uint16_t i, const uint16_t j) {
#if CELL_SIZE == 1
    oled_write_raw_byte(value, i * OLED_DISPLAY_WIDTH + j);
#elif CELL_SIZE <= 4
    uint32_t val32 = 0;
    for (int8_t b = 0; b < 8; b++) {
        bool pix = 1 & (value >> b);
        uint8_t pixVal = 0;
        for (uint8_t size = 0; size < CELL_SIZE; size++) {
            pixVal = pixVal << 1 | pix;
        }
        val32 = val32 << CELL_SIZE | pixVal;
    }
    for (uint8_t a = 0; a < CELL_SIZE; a++) {
        for (uint8_t b = 0; b < CELL_SIZE; b++) {
            oled_write_raw_byte(((char*)&val32)[a], (CELL_SIZE * i + a) * OLED_DISPLAY_WIDTH + CELL_SIZE * j + b);
        }
    }
#else // CELL_SIZE value
    #error Algorithm must be defined for defined CELL_SIZE value
#endif // CELL_SIZE value
}

uint32_t pomodoro_start_timer = 0;

/* Definition of the animation */
typedef struct {
  uint32_t start_timer;
  uint16_t frame_duration;
  int16_t  ratioPerc;
} t_animation;


void pomodoro_render_next_frame(t_animation* animation) {
  animation->start_timer = timer_read32();

  const uint32_t time_elapsed = timer_elapsed32(pomodoro_start_timer);
  if (time_elapsed < POMODORO_TIMER * 60L * 1000) {
    // Number of pixels to fill to represent the remaining time in pomodoro
    int32_t nbPix = (POMODORO_TIMER * 60L * 1000 - time_elapsed) / NB_MS_BY_PIXEL;
    const int32_t nbPixExpected = nbPix;
    uint16_t i;
    uint16_t j;
    for (j = 0; j < NB_COLS && nbPix > 0; j++) {
      for (i = 0; i < NB_ROWS && nbPix > 0; i++) {
        char value = 0;
        for (uint8_t b = 0; b < 8; b++) {
          value |= (rand() % (8 * NB_ROWS * NB_COLS) < nbPixExpected) << b;
        }
        write_char_cells_oled(value, i, j);
        for (int8_t b = 0; b < 8 ; b++) {
          nbPix -= (1 & (value >> b));
        }
      }
    }
    for (; j < NB_COLS; j++) {
      for (; i < NB_ROWS; i++) {
        write_char_cells_oled(0, i, j);
      }
      i = 0;
    }
  }
}

/* Display the pomodoro timer */
void render_pomodoro(void) {
    oled_set_cursor(0, 7);
    // Handle the toggle command

    if (pomodoro_start_timer == 0) {
      pomodoro_start_timer = timer_read32();
    } else {
      pomodoro_start_timer = 0;
    }

    // A timer is running
    if (pomodoro_start_timer != 0) {
        const uint32_t time_s = MAX(0, (25 * 60) - (timer_elapsed32(pomodoro_start_timer) / 1000));
        char pomodoro_str[6];
        oled_write_P(PSTR("POMO "), time_s == 0); // 2
        sprintf(pomodoro_str, "%02lu:%02lu", time_s / 60, time_s % 60);
        oled_write(pomodoro_str, time_s == 0); // 5
        if (time_s == 0) {
            pomodoro_start_timer = 0;
        }
    }
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    render_status();
    render_pomodoro();
  } else {
    oled_write_P(PSTR("No logo to see.\n"), false);
  }
}
