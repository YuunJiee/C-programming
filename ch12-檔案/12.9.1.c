/* fileDebug1.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fptr;
	char name[50];
	int score_c;
	
	fptr = fopen("student.dat", "w");
	printf("press [0] to quit....\n");
	printf("Please input a name: ");
	scanf("%s", name);
	printf("Please input the score: ");
	scanf("%d", &score_c);
	while (score_c != 0) {
		fprintf(fptr, "%s %d", name, score_c);
		printf("Please input a name: ");
		scanf("%s", name);
		printf("Please input the score: ");
		scanf("%d", &score_c);
	}
	fclose(fptr);
	
	system("PAUSE");
	return 0;
	
} 
