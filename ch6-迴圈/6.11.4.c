/* loopDebug4.c */

#include <stdio.h>

int main () {
	int i = 1,total = 0;
	while (i <= 100) {
		total += i;
		i++;
	}
	printf("The sum of 1~100: %d\n", total);
	
	return 0;
}
