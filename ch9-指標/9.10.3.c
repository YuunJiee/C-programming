/* ptrDebug3.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[5] = {1, 3, 5, 7, 9};
	int arrLen = 5;
	int *ptr = arr;
	int i;
	printf("The source array: ");
	for(i = 0; i < arrLen; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
	printf("After multiply 10: ");
	for(i = 0; i < arrLen; i++) {
		ptr[i] *= 10;
		printf("%d ", ptr[i]);
	}
	printf("\n");
	
	return 0;
} 
