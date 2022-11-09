#include <stdio.h>
#include <stdlib.h>

int main () {
	int gpa;
	printf("Please enter your gpa: ");
	scanf("%d", &gpa);
	switch(gpa) {
		case 4 :
			printf("excellent student");
			break;
		case 3 :
			printf("good student");
			break;
		case 2 :
			printf("satisfactory");
			break;
		case 1 :
			printf("score = 50");
			break;
		default :
			printf("Are you a fool or a genius ?");
			break;
	}
	return 0;
} 
