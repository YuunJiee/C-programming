/* structDebug1.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
	char *name;
	int score;
};

int main () {
	struct student stu;
	stu.name = "Frank";
	stu.score = 80;
	printf("The student's name is %s\n", stu.name);
	printf("The student's score is %d\n", stu.score);
	
	return 0;
}

