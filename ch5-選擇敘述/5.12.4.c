#include <stdio.h>
#include <stdlib.h>

int main () {
	int gpa;
	printf("Please enter your gpa: ");
	scanf("%d", &gpa);
	if(gpa == 4) {
		printf("excellent student");
	}else if (gpa == 3) {
		printf("good student");
	}else if (gpa == 2) {
		printf("satisfactory");
	}else if (gpa == 1) {
		printf("score = 50");
	}else {
		printf("Are you a fool or a genius ?");
	}
	return 0;
} 
