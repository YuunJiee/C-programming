#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Please enter the number: ");
	scanf("%d", &n);
	if (n%2 == 0) {
		printf("The number %d is a multiple of 2\n",n);
	}
	if (n%3 == 0) {
		printf("The number %d is a multiple of 3\n",n);
	}
	if (n%5 == 0) {
		printf("The number %d is a multiple of 5\n",n);
	}
	if (n%2 != 0 && n%3 != 0 && n%5 != 0) {
		printf("The number %d is not a multiple of 2¡B3 or 5",n);
	}
	return 0;
}
