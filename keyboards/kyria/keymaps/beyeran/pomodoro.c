#include "pomodoro.h"

static uint8_t running_time = 0;
struct PomodoroTime pomodoro_time = {
  .minutes = 0,
  .seconds = 0
};

uint8_t get_pomodoro_minutes(void) {
  return pomodoro_time.minutes;
}

uint8_t get_pomodoro_seconds(void) {
  return pomodoro_time.seconds;
}

void set_pomodoro_time(uint8_t minutes, uint8_t seconds) {
  pomodoro_time.minutes = minutes;
  pomodoro_time.seconds = seconds;
}

void update_pomodoro_time(void) {
  if (running_time > 0) {
    uint8_t latest_time = 1000 / timer_elapsed(running_time) / 5;
    uint8_t new_seconds = pomodoro_time.seconds + latest_time;

    if (new_seconds >= 60) {
      pomodoro_time.minutes += 1;
    }
    pomodoro_time.seconds = new_seconds % 60000;
  }

  if (pomodoro_time.minutes >= 25) {
    set_pomodoro_time(25, 0);
    return;
  }

  running_time = timer_read();
}
