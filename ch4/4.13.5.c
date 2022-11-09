/* Trapezoid area */
#include <stdio.h>

int main() {
  int TopW, BottomW, H;
  double area;
  printf("Top width = ");
  scanf("%d", &TopW);
  printf("Bottom width = ");
  scanf("%d", &BottomW);
  printf("Height = ");
  scanf("%d", &H);
  area = (TopW+BottomW)*H/2.0;
  printf("Area = %.2lf", area);
  return 0;
}