#include <stdio.h>

int main () {
	int a = 88, b = 99;
	funct(a, b);
	printf("a = %d b = %d\n", a, b);
	
	return 0;
} 

int funct(int a, int b) {
	int c;
	c = a + b;
	printf("a + b = %d\n", c);
	return c;
}
