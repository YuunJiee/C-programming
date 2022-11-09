#include <stdio.h>

int main () {
	int i, num;
	for (i = 1; i <= 10; i++) {
		printf("Please input a number: ");
		scanf("%d", &num);
		if(num < 0)
			break;
		printf("i = %d, num = %d\n", i ,num);
	}
}
