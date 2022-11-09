#include <stdio.h>

int main() {
  int i = 100, total = 0;

  total = ++i + 1;
  printf("total = %d, i = %d\n", total, i);

  total  = 0;
  total = i++ + 1;
  printf("total = %d, i = %d\n", total, i);
  
  return 0;
}