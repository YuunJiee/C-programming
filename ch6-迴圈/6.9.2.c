#include <stdio.h>

int main () {
	char i = 'a';
	for(; i <= 'z'; i++) {
		printf("%2c", i);
	}
	printf("\n");
	
	return 0;
} 
