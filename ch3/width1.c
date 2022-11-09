#include <stdio.h>

int main() {
  double f1 = 123.4567;

  printf("|%f|\n", f1);
  printf("|%20f|\n", f1);
  printf("|%-20f|\n", f1);
  printf("|%-20.8f|\n", f1);
  printf("|%-6.2f|\n", f1);
  printf("|%+-20e|\n", f1);
  printf("|%+-20.3e|\n", f1);
  
  return 0;
}