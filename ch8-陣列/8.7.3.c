#include <stdio.h>
void inputMatrix(int[3][3]);     //不可以寫成 int[][],只有最左邊 列 可以空，行 不可，例如 int[][3] 才可 
void showMatrix(int[3][3]);
void sumMatrix(int[3][3], int[3][3]);

int main() {
	int matrix1[3][3];
	int matrix2[3][3];
	
	printf("Matrix 1 :\n");
	inputMatrix(matrix1);
	printf("Matrix 2 :\n");
	inputMatrix(matrix2);
	
	printf("\nMatrix 1 :\n");
	showMatrix(matrix1);
	printf("Matrix 2 :\n");
	showMatrix(matrix2);
	
	printf("\nSum matrix 1 and 2 : \n");
	sumMatrix(matrix1, matrix2);
}

void inputMatrix(int matrix[3][3]) {
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Matrix[%d][%d] = ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void showMatrix(int matrix[3][3]) {
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void sumMatrix(int matrix1[3][3], int matrix2[3][3]) {
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d " , matrix1[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}
}









