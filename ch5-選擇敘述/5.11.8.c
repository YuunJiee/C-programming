#include <stdio.h>
#include <stdlib.h>

int main () {
	int x = 1, y = 0;
	printf("x = %d, y = %d\n", x, y);
	printf("x && x? %d\n", x && x);
	printf("x && y? %d\n", x && y);
	printf("y && y? %d\n", y && y);
	return 0;
	
}
