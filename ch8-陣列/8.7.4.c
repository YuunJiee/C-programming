/* 矩陣相乘 */ 
#include <stdio.h>
#define ROW 2
#define COLUMN 3
void inputMatrix(int[ROW][COLUMN], int[COLUMN][ROW]);     
void showMatrix(int[ROW][COLUMN], int[COLUMN][ROW]);
void mulMatrix(int[ROW][COLUMN], int[COLUMN][ROW]);

int main() {
	int matrix1[ROW][COLUMN];
	int matrix2[COLUMN][ROW];
	
	inputMatrix(matrix1, matrix2);
	printf("\n");
	showMatrix(matrix1, matrix2);
	printf("\n");
	mulMatrix(matrix1, matrix2);
}

//輸入兩個矩陣 
void inputMatrix(int matrix1[ROW][COLUMN], int matrix2[COLUMN][ROW]) {
	int i, j;
	printf("Matrix 1 :\n");
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COLUMN; j++) {
			printf("Matrix 1[%d][%d] = ", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Matrix 2 :\n");
	for(i = 0; i < COLUMN; i++) {
		for(j = 0; j < ROW; j++) {
			printf("Matrix 1[%d][%d] = ", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
}

//印出兩個矩陣 
void showMatrix(int matrix1[ROW][COLUMN], int matrix2[COLUMN][ROW]) {
	int i, j;
	printf("Matrix 1 :\n");
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COLUMN; j++) {
			printf("%5d ",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix 2 :\n");
	for(i = 0; i < COLUMN; i++) {
		for(j = 0; j < ROW; j++) {
			printf("%5d ",matrix2[i][j]);
		}
		printf("\n");
	}
}

//矩陣相乘 
void mulMatrix(int matrix1[ROW][COLUMN], int matrix2[COLUMN][ROW]) {
	int i, j, k;
	int matrix3[ROW][ROW];
	
	//把矩陣三初始化 
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < ROW; j++) {
			matrix3[i][j] = 0; 
		}
	}
	
	printf("\nMultiply matrix 1 and 2 : \n");
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < ROW; j++) {
			for(k = 0; k < COLUMN; k++) {
				matrix3[i][j] = matrix3[i][j] + (matrix1[i][k]*matrix2[k][j]);
			}
			printf("%5d ",matrix3[i][j]);
		}
		printf("\n");
	}
	
}
