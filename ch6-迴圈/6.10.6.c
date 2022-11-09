/* §PÂ_½è¼Æ */
 
#include <stdio.h>

int main () {
	int i,num = 0,pr = 0;
	
	printf("Please enter a number(input a char to exit): ");
	
	while(scanf("%d",&pr) == 1) {
		
		for (i = 2; i < pr; i++) {
			if(pr%i == 0) {
				num += 1;
			}
		}
		
		if(num == 0) {
			printf("%d is a prime number.\n", pr);
		}else {
			printf("%d is not a prime number.\n", pr);
		}
		num = 0;
		
		printf("Please enter a number(input a char to exit): ");
	}
	return 0;
}
