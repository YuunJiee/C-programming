#include <stdio.h>

int main () {
	int i = 1, total = 0;
	
	//while
	while(i <= 100) {
		total = total + i;
		i++;
	}
	printf("total1 = %d\n", total);
	
	//do..while
	i = 1;
	total = 0;
	do {
		total = total + i;
		i++;
	}while(i <= 100);
	printf("total2 = %d\n", total);
	
	//for
	total = 0;
	for(i = 1; i <= 100; i++) {
		total = total + i;
	}
	printf("total3 = %d\n", total);
	return 0;
}
