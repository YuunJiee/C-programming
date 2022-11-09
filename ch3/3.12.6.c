/* ioDebug6.c */

#include <stdio.h>

int main() {

  char ch;
  int num;
  float fnum;
  double dnum;
  
  printf("Please input a char: ");
  scanf("%c", &ch);
  printf("Please input a integer: ");
  scanf("%d", &num);
  printf("Please input a float: ");
  scanf("%f", &fnum);
  printf("Please input a double: ");
  scanf("%lf", &dnum);

  printf("The char you input is: %c\n", ch);
  printf("The integer you input is: %d\n",num);
  printf("The float you input is: %f\n", fnum);
  printf("The double you input is: %lf\n", dnum);
  return 0;
}