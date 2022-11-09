/* opeDebug3.c */
#include <stdio.h>

int main() {
  int total = 20, num = 10;
  total = total + ++num;
  printf("total = %d\n", total);
  return 0;
}