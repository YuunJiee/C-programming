#include <stdio.h>
#include <stdlib.h>

int main () {
	char row, column;
	int b,i = 1;
	
	for(row = 'A'; row <= 'G'; row++) {
		for(column = row; column <= 'G'; column++) {
			printf("%2c",column);
		}
		for (b = 0; b < i; b++) {
			printf("¡@");
		}
		i+=2;
		for(column = 'G'; column >= row; column--) {
			printf("%2c",column);
		}
		printf("\n");
	}
	
	printf("\n");
	i-=2;
	
	for(row = 'G'; row >= 'A'; row--) {
		for(column = row; column <= 'G'; column++) {
			printf("%2c",column);
		}
		for (b = 0; b < i; b++) {
			printf("¡@");
		}
		i-=2;
		for(column = 'G'; column >= row; column--) {
			printf("%2c",column);
		}
		printf("\n");
	}
	
	return 0;
}
