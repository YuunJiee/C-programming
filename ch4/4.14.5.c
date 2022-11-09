/* opeDebug5.c */

#include <stdio.h>

int main() {
  int num1 = 1, num2 = 2, num3 = 3;
  printf("num2 more than num1 and num2 more then num3: %d\n", num2 > num1 & num2 > num3);
  printf("num1 more than num2 or num2 more then num3: %d\n", num1 > num2 | num2 > num3);
  return 0;
}