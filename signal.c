/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "timer.h"

int total_alarms = 0;

void increment_alarm() {
  total_alarms += 1;
}

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  increment_alarm();
}

int main(int argc, char * argv[])
{
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  signal(SIGALRM,handler); // Register handler to handle SIGALRM.
  while(1){
    alarm(1); // Schedule a SIGALRM for 1 second.
    sleep(1);
    printf("Turing was right!\n");
}