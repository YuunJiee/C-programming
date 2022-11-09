/* opeDebug2.c */
#include <stdio.h>

int main() {
  int num = 100;
  num +=100;
  printf("num 加上 100 並指定給 num 後為 %d\n", num);
  num -=100;
  printf("num 減掉 100 並指定給 num 後為 %d\n", num);
  num *=100;
  printf("num 乘上 100 並指定給 num 後為 %d\n", num);
  num /=100;  
  printf("num 除以 100 並指定給 num 後為 %d\n", num);
  return 0;
}