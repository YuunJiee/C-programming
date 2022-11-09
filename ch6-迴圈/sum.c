#include <stdio.h>
#include <stdlib.h>

int main () {
	int number;
	int total = 0, item = 1;
	
	printf("%d. Input a number to be sumed : \n", item);
	
	while(scanf("%d", &number) == 1) {
		total = total + number;
		printf("%d. Input a number to be sumed : \n", ++item);
	}
	
	item--;
	printf("\nThere are %d numbers entered, \n", item);
	printf("Their sum is %d.\n", total);
	
	return 0;
}
