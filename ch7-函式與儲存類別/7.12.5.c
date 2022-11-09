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
		printf("小明正在跑操場...\n");
		printf("小明跑完了第%d圈\n", ++count);
	}
}
