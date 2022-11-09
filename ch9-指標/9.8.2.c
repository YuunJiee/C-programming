#include <stdio.h>
#include <stdlib.h>

int main () {
	int a[] = {1, 2, 3, 4, 5};
	int *ptr = a;
	printf("ptr[0] = %d\n", ptr[0]);  //1
	printf("ptr[-1] = %d\n", ptr[-1]);  //output garbage value
	printf("ptr[1] = %d\n", ptr[1]); //2
	
	ptr = a + 1;
	printf("ptr[0] = %d\n", ptr[0]);   //2
	printf("ptr[-1] = %d\n", ptr[-1]);  //1
	printf("ptr[1] = %d\n", ptr[1]);  //3
	
}
