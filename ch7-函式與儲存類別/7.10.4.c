#include <stdio.h>
void statAi();

int main() {
	int i;
	for(i = 1; i <= 5; i++) {
		starAi();
	}
	return 0;
}

void starAi() {
	int ai = 1;
	static int si = 1;
	printf("ai = %d\n", ai++);
	printf("si = %d\n\n", si++);
}
