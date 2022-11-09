/* Triangle area */
#include <stdio.h>

int main() {
  int w, h;
  double area;
  printf("width = ");
  scanf("%d", &w);
  printf("height = ");
  scanf("%d", &h);
  area = (w*h)/2.0;
  printf("area = %.2lf", area);
  return 0;
}