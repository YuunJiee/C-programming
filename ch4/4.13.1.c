#include <stdio.h>

int main() {

  double c,f;
  printf("Degrees Celsius: ");
  scanf("%lf", &c);
  f = (9/5.0)*c + 32;
  printf("Degrees Fahrenheit: %.2lf", f);
  
  return 0;
}