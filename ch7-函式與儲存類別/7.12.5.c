/* funDebug5.c */
#include <stdio.h> 
int count = 0;
void run();

int main() {
	run();
	return 0;
}

void run() {
	while (count < 10) {
		printf("�p�����b�]�޳�...\n");
		printf("�p���]���F��%d��\n", ++count);
	}
}
