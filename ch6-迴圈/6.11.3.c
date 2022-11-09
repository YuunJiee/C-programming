/* loopDebug3.c */

#include <stdio.h>

int main () {
	int i, total = 0;
	for (i = 1; i <=100; i++) {
		total += i;
	}
	printf("The sum of 1~100: %d\n", total);
	
	return 0;
} 
