#include <stdio.h>

int main() {

  char str[30] = "String VS Width";

  printf("|%s|\n", str);
  printf("|%20s|\n", str);
  printf("|%-20s|\n", str);
  printf("|%-20.8s|\n", str);
  printf("|%20.8s|\n", str);  

  return 0;
}