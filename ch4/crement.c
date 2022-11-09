#include <stdio.h>

int main() {
  int x, y;
  int result;

  x = 3;
  y = 5;

  result  = x * (y++);
  printf("result = %d  x = %d  y = %d\n", result, x, y);
  
  result = x * (y++);
  printf("result = %d  x = %d  y = %d\n", result, x, y);

  return 0;
}