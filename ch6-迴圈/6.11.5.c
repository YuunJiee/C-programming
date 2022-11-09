/* loopDebug5.c */

#include <stdio.h>

int main () {
	int i = 1, total = 0;
	do {
		total += i++;
	} while(i <= 100);
	
	printf("The sum of 1~100: %d\n", total);
	
	return 0;
} 
