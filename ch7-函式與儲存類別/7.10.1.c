#include <stdio.h>
void printStar(int);
int main() {
	int i;
	printf("How many stars do you want ? ");
	scanf("%d", &i);
	printStar(i);
	printf("Mr. Bright Tsai is in Stanford university\n");
	printStar(i);
	
	return 0;
}
void printStar(int k) {
	int i;
	for(i = 1; i <= k; i++) {
		printf("*");
	}
	printf("\n");
} 
