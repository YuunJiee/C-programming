/* §PÂ_½è¼Æ */
 
#include <stdio.h>
int checkPrime(int);

int main () {
	int pr;
	
	printf("Please enter a number(input a char to exit): ");
	scanf("%d",&pr);
	checkPrime(pr);
	
	return 0;
}

int checkPrime(int pr) {
	int i, j,num = 0;
	for (i = 2; i < pr; i++) {
			if(pr%i == 0) {
				num += 1;
			}
		}
		
		if(num == 0) {
			printf("%d is a prime number.\n", pr);
		}else {
			printf("%d is not a prime number.\n", pr);
			printf("Factor: ");
			for (j = 1; j <= pr; j++) {
				if(pr%j == 0) {
					printf("%d ", j);
				}
			}
		}
		return 0;
	
}
