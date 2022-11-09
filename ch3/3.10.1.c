#include <stdio.h>

int main() {

  char c = '$';
  printf("The original c is %c\n", c);
  printf("%%c.....|%c|\n", c);
  printf("%%5c......|%5c|\n", c);
  printf("%%-5c......|%-5c|\n", c);
  
  return 0;
}