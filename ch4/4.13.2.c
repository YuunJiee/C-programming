#include <stdio.h>

int main() {
  int C = 0, ca = 0, co = 0;
  double avg;
  printf("please input your grades: \n");
  printf("C language: ");
  scanf("%d", &C);
  printf("Calculus: ");
  scanf("%d", &ca);
  printf("Introduction of computer: ");
  scanf("%d", &co);
  avg = C*0.4 + ca*0.3 + co*0.3;
  printf("Grade average: %.2lf", avg);
  return 0;
}