#include "pomodoro.h"

static uint8_t running_time     = 0;
static uint8_t pomodoro_seconds = 0;
static uint8_t pomodoro_minutes = 0;

uint8_t get_pomodoro_minutes(void) {
  return pomodoro_minutes;
}

uint8_t get_pomodoro_seconds(void) {
  return pomodoro_seconds;
}

void set_pomodoro_time(uint8_t minutes, uint8_t seconds) {
  pomodoro_minutes = minutes;
  pomodoro_seconds = seconds;
}

void update_pomodoro_time(void) {
  uint8_t latest_time = timer_elapsed(running_time);

  if (latest_time >= 1000) {
    pomodoro_seconds += 1;
  }

  if (pomodoro_seconds >= 60) {
    pomodoro_minutes += 1;
    pomodoro_seconds = 0;
  }

  if (pomodoro_minutes >= 25) {
    set_pomodoro_time(25, 0);
    return;
  }

  running_time = timer_read();
}
