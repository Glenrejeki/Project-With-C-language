#include <stdio.h>
#include <time.h>


int main (){

  time_t s, val = 1;
  struct tm* current_time;


  // Time in seconds
  s = time(NULL);

  // Untuk mendapatkan waktu yang sekarnag

  current_time = localtime (&s);

  // print time dalam minutes
  // hours ad seconds

  printf(" %02d : %02d : %02d", current_time -> tm_hour, current_time -> tm_min, current_time -> tm_sec);


  return 0;
}