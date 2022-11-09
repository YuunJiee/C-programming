#include <stdio.h>

int main () {
	int i, total = 0;
	for(i = 1; i <= 100; i++) {
		if(i%2 != 0) {
			continue;
		}
		total = total + i;
	}
	printf("The even sum of 1~100 : %d",total);
	
	return 0;
}
