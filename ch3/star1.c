#include <stdio.h>

int main() {
  int width, precision;
  double dnum = 1234.56789;

  printf("Source Number: %f\n\n", dnum);
  printf("Input the width: ");
  scanf("%d", &width);

  printf("\nInput the precision:　");
  scanf("%d", &precision);

  printf("\nFormat ===> \"%%-%d.%df\"\n", width, precision);
  printf("Formatted Number: |%-*.*f|\n", width, precision, dnum);

  return 0;
}