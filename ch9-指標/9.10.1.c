/* ptrDebug1.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 30;
	int *ptr;
	ptr = &num;
	printf("num = %d\n", num);
	printf("*ptr = %d\n", *ptr);
	
	return 0;
}
