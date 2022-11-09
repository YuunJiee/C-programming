/* 選擇排序法 */ 
#include <stdio.h>
#include <stdlib.h>
#define N 20
void list(int *array);
void swap(int *, int *);
void selection_sort(int *array); 

int main () {
	int i, array[N];
	
	for(i = 0; i < N; i++) {
		array[i] = rand()%100 + 1;
	}
	printf("\nSource array ... \n");
	list(array);
	
	selection_sort(array);
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

void swap(int *i, int *j) {
	int temp;
	
	temp = *i;
	*i = *j;
	*j = temp;
}

void selection_sort(int *array) {
	int i, cmp, min;
	
	for(i = 0; i < N; i++) {
		for(cmp = min = i,cmp++; cmp < N; cmp++) { //第一個 cmp++ 是因要從 min下一個開始跑 
			if(array[cmp] < array[min]) {
				min = cmp;
			} //完全循環找到最小值位置再交換 
			swap(&array[min], &array[i]);
		}
	}
} 






