#pragma once

#include "quantum.h"

typedef struct PomodoroTime PomodoroTime;
struct PomodoroTime {
  uint8_t minutes;
  uint8_t seconds;
};

uint8_t get_pomodoro_minutes(void);
uint8_t get_pomodoro_seconds(void);

void set_pomodoro_time(uint8_t minutes, uint8_t seconds);
void update_pomodoro_time(void);
