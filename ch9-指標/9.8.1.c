#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 10;
	int *ptrNum = &num;
	
	printf("num = %d &num = %p\n", num, &num);
	printf("*ptrNum = %d ptrNum = %p &ptrNum = %p\n", *ptrNum, ptrNum, &ptrNum);
	
	*ptrNum = 20;
	printf("num = %d *ptrNum = %d\n", num , *ptrNum);
	
	return 0;
}
