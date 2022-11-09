#include <stdio.h>

int main() {

  char name[20];

  printf("What's your name ?\n ");
  scanf("%*s %*s %s", name);
  printf("\nGod! Your name is %s. \n", name);
  
  return 0;
}