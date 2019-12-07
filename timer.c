#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int total_alarms = 0;
void increment_alarm() {
  total_alarms += 1;
}

void sigint_handler(int signum)
{
  printf("\n There were %d alarms in total.\n", total_alarms);
  printf("The program was executed for %d seconds.\n", total_alarms);
  exit(0);
}
