#include <stdio.h>

int main() {
  short int si  = -1;
  int i = 2147483646;
  
  printf("%hd\n", si);
  printf("%hu\n", si);
  printf("%d\n", i + 1);
  printf("%d", i + 2);

  return 0;
}