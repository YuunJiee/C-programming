#include <stdio.h>

int main() {
  int num = 12345;
  printf("|%d|\n", num);
  printf("|%8d|\n", num);
  printf("|%-8d|\n", num);
  printf("|%3d|\n, num");

  return 0;
}