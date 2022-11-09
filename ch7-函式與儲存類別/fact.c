#include <stdio.h>
unsigned int fact(int);

int main () {
	int i;
	
	printf("Factorial...\n\n");
	for(i = 0; i <= 17; i++) {
		printf("	%3d! = %-30u\n", i, fact(i));
	}
	
	return 0;
}

unsigned int fact(int num) {
	if(num == 0)
		return(1);
	return (num * fact(num-1));
}

