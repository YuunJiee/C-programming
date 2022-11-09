#include <stdio.h>

int main() {

  int hw, mid, fin, qu, co;
  double grade;
  printf("Please input your grade of C language\n");
  
  printf("HW: ");
  scanf("%d", &hw);
  printf("MidExam: ");
  scanf("%d", &mid);
  printf("FinExam: ");
  scanf("%d", &fin);
  printf("Quiz: ");
  scanf("%d", &qu);
  printf("ComputerTest: ");
  scanf("%d", &co);

  grade = hw*0.2 + mid*0.2 + fin*0.25 + qu*0.15 + co*0.2;
  printf("Your grade of C language is %.2lf", grade);
  return 0;
}