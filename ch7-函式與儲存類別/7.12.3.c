/* funDebug3.c */
#include <stdio.h>
int square (int); 

int main () {
	int num = 5;
	printf("%d power of 2 = %d", num, square(num));
	
	return 0;
}

int square (int num) {
	return num*num;
}
