#include <stdio.h>
#include <math.h> 
void multiple(int);
void square(int);

int main () {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("\n");
	multiple(num);
	square(num);
	
	return 0;
}

void multiple(int num) {
	if(num%7 == 0) {
		printf("%d is a multiple of 7.\n", num);
	}
	if(num%11 == 0) {
		printf("%d is a multiple of 11.\n", num);
	}
	if(num%13 == 0) {
		printf("%d is a multiple of 13.\n", num);
	}
	if(num%7 != 0 && num%11 != 0 && num%13 != 0) {
		printf("%d is not a multiple of 7¡B11 or 13.\n", num);
	}
}

void square(int num) {
	double sq;
	sq = sqrt (num);
	printf("The square root of %d is %.4lf", num, sq);
}
