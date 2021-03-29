#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "pomodoro.h"


void pomodoro_interval_wait(int milliseconds) {
  int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;

  int end = milliseconds_since + milliseconds;

  do {
    milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
  } while (milliseconds_since <= end);
}

void pomodoro_start(void) {
  pomodoro_interval_wait(LENGTH_POMODORO * 60 * 60 * 1000);
}
