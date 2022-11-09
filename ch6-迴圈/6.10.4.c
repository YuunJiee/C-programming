#include <stdio.h>

int main () {
	int i, num, odd = 0,even = 0;
	for(i = 1; i <= 20 ; i++) {
		printf("%d.Please enter a number: ", i);
		scanf("%d", &num);
		if(num%2 == 0) {
			even+=1;
		}else {
			odd+=1;
		}
	}
	printf("odd numbers have %d, even numbers have %d", odd, even);
	
	return 0;
}
