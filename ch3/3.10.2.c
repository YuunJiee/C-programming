#include <stdio.h>

int main(void) {
  char string[20] = "computer science";
  printf("The original string is %s\n", string);
  printf("%%s------|%s|\n", string);
  printf("%%8s------|%8s|\n", string);
  printf("%%20s------|%20s|\n", string);
  printf("%%-20s------|%-20s|\n", string);
  
  return 0;
}