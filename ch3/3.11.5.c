#include <stdio.h>

int main(void) {

  int quizs,midExam,finalExam;
  char studentID[20];

  printf("Please enter your student ID: ");
  scanf("%s", studentID);

  printf("Please enter your C's grades: ");
  scanf("%d %d %d", &quizs, &midExam, &finalExam);
  
  printf("student ID: %s\n\n", studentID);
  printf("C language grades:\n");
  printf("Quizs: %d\n", quizs);
  printf("Midterm Exam: %d\n", midExam);
  printf("final Exam: %d\n", finalExam);
  return 0;
}