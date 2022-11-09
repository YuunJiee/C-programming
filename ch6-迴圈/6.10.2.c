#include <stdio.h>

int main () {
	int r,c;
	
	printf("(a)\n");
	for (r = 1; r <= 5; r++) {
		for(c = 1; c <= r; c++) {
			printf("*");
		}
		printf("\n");
	}
	for (r = 1; r <= 5; r++) {
		for(c = 4; c >= r; c--) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("(b)\n");
	for (r = 1; r <= 4; r++) {
		for(c = 5; c >= r; c--) {
			printf("*");
		}
		printf("\n");
	}
	for (r = 1; r <= 5; r++) {
		for(c = 1; c <= r; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
