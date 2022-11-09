#include <stdio.h>
#include <stdlib.h>
#define N 3
void list(int array[N][N]);
void add(int array[N][N]);

int main () {
	
	int array[N][N];
	int i, j;
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			array[i][j] = rand()%100 + 1;
		}
	}
	
	printf("The source array : \n");
	list(array);
	
	add(array);
	printf("\nAfter adding 1 : \n");
	list(array);
	
	return 0;
}

void list(int array[N][N]) {
	int i, j;
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%8d", array[i][j]);
		}
		printf("\n");
	}
	
}

void add(int array[N][N]) {
	int i, j;
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			array[i][j] += 1;
		}
	}
}







