/* structDebug2.c */
#include <stdio.h>
#include <stdlib.h>

struct student {
	char *name;
	int score;
};

int main() {
	struct student stu = {"John", 98};
	struct student *ptr = &stu;
	printf("The student's name is %s\n", ptr->name);
	printf("The student's score is %d\n", ptr->score);
	
	return 0;
}
