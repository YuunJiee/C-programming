#include <stdio.h>

int main () {
	int i, total = 0;
	for(i = 1; i++ <= 100;) {
		total += 1;
	}
	printf("total = %d, i  = %d", total, i);
	
	return 0;
} 
