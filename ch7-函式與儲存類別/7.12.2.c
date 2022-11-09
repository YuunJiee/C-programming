/* funDebug2.c */ 
#include <stdio.h>
int sum(int, int);

int main() {
	int a = 5, b = 6, total;
	total = sum (a, b);
	printf("%d + %d = %d", a, b, total);
	
	return 0;
}

int sum (int a, int b) {
	return a + b;
}

