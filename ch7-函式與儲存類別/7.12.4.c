/* funDebug4.c */
#include <stdio.h> 

int number = 0;
void count();

int main () {
	while (number < 10) {
		count();
		printf("這是第%d次呼叫 count() 函數\n", number);
	} 
	return 0;
}

void count() {
	number++;
}
