/* ptrDebug2.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 30;
	int *ptr = num;
	ptr = &num;   //要先給位置!!! 
	printf("num = %d\n", num);
	printf("透過 ptr 指標對 num 加上 20 \n");
	*ptr += 20;
	printf("num = %d\n", num);
	
	return 0; 
} 
