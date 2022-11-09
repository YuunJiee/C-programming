/* arrDebug4.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, total = 0;
	for (i = 0; i < 10; i++) {
		total += arr[i];
	}
	printf("The sum of the array : %d", total);
	
	return 0;
}
