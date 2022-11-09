#include <stdio.h>

int main() {
  int i = 10, j = 20;
  char str[10] = "Stanford";
  int printfValue;

  printfValue = printf("%s\n", str);
  printf("Return value is %d\n", printfValue);

  printfValue = printf("%d + %d = %d\n", i, j, i+j);
  printf("Return value is %d\n", printfValue);
  printf("\n\n");
  return 0;
}