#include <stdio.h>

int main () {
	int i,j;
	printf("(a)\n");
	for (i = 1; i <= 9; i++) {
		for(j = 1; j <= 9; j++) {
			printf("%d*%d= %2d", i, j, i*j);
			printf("�@");
		}
		printf("\n");
	}
	printf("(b)\n");
	for (i = 1; i <= 9; i++) {
		for(j = 1; j <= 9; j++) {
			printf("%d*%d= %2d", j, i, i*j);
			printf("�@");
		}
		printf("\n");
	}
	return 0;
}
