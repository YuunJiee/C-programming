/* 插入排序法-使用指標 */
#include <stdio.h>
#include <stdlib.h>
#define N 20
void list(int *array);
void insert_sort(int *array);

int main () {
	int array[N];
	int i;
	
	for(i = 0; i < N; i++) {
		array[i] = rand() % 100 + 1;
	}
	printf("\nSource array ... \n");
	list(array);
	
	insert_sort(array);
	printf("\nSorting ... \n");
	list(array);
	return 0;
}

void list(int *array) {
	int i;
	
	for(i = 0; i < N; i++) {
		printf("%8d", array[i]);
		if(((i+1) % 5) == 0) {
			printf("\n");
		}
	}
	printf("\n");
}

/* Insertion Sorting */
void insert_sort(int *array) {
	int i, j, temp = 0;
	
	for(i = 1; i < N; i++) {
		temp = array[i];
		for(j = i; array[j-1] >= temp; j--) {
			array[j] = array[j-1];
		}
		array[j] = temp;
	}
}








