/* ptrDebug6.c */
#include <stdio.h>
#include <stdlib.h>
int sum(int (*)[3], int, int);

int main() {
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int row = 2, col = 3;
	printf("\ntotal = %d\n", sum(arr, row, col));
	
	return 0;
}

int sum(int (*arr)[3], int row, int col) {
	int i, j, total = 0;
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			total += (*(arr+i))[j];
			printf("%d ", (*(arr+i))[j]);
		}
	}
	return total;
}
