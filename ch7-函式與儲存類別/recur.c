#include <stdio.h>

void recur(int) ;
int main () {
	printf("Recursive call...\n\n");
	recur(4);
	
	return 0;
}

void recur(int level) {
	printf("Before level ===> %d\n", level);
	if(level > 0) {
		recur (level - 1);
	}
	printf("After level ===> %d\n", level);
}
