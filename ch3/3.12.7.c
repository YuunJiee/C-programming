/* ioDebug7.c */

#include <stdio.h>

int main() {
  int hour, min ,sec;
  int year, month, days;
  printf("What time it is?(hour:min:sec): ");
  scanf("%d:%d:%d", &hour, &min, &sec);
  printf("What day is today?(year-month-days): ");
  scanf("%d-%d-%d", &year, &month, &days);
  printf("Now time is: %d h %d m %d s\n", hour, min, sec);
  printf("Today is: CE %d y %d m %d d", year, month, days);
  return 0;
}