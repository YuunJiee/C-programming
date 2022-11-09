#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[] = {10, 11, 12, 13, 14};
	int *p[] = {a+1, a, a+2, a+4, a+3}; //*p[0] = **(p+0) 
	int **pp = p;                       //pp為指向指標的指標 
	printf("*p[2] = %d\n", *p[2]); //12
	printf("**pp = %d\n", **pp); // 11
	printf("*(*(pp+2)+2) = %d\n", *(*(pp+2)+2)); //14
	
	return 0;
} 
