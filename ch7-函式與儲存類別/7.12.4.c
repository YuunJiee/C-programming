/* funDebug4.c */
#include <stdio.h> 

int number = 0;
void count();

int main () {
	while (number < 10) {
		count();
		printf("�o�O��%d���I�s count() ���\n", number);
	} 
	return 0;
}

void count() {
	number++;
}
