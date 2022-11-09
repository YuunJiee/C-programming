#include <stdio.h>

int main () {
	char i = 'a';
	for(; i <='z';) {
		printf("%2c", i);
		i++;
	}
	printf("\n");
	
	return 0;
}
