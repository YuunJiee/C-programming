/* ptrDebug2.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 30;
	int *ptr = num;
	ptr = &num;   //�n������m!!! 
	printf("num = %d\n", num);
	printf("�z�L ptr ���й� num �[�W 20 \n");
	*ptr += 20;
	printf("num = %d\n", num);
	
	return 0; 
} 
