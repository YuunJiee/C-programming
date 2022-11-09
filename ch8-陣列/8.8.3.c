/* arrDebug3.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num[2][3];
	int i, j;
	for(i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("Please enter num[%d][%d]: ", i, j);
			scanf("%d", &num[i][j]);
		}
	}
	printf("\nPrint all the elements of array num :\n");
	for(i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} 
