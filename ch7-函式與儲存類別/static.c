#include <stdio.h>

void test(void);

int main() {
	int i;
	
	printf("static variable testing ... \n\n");
	for(i = 0; i < 5; i++) {
		printf("Iteration %d : ", i+1);
		test();
	}
	
	return 0;
}

void test(void) {
	int autoVar = 1;
	static int staticVar = 1;
	
	printf("auto_var = %d sratic_var = %d\n", autoVar++, staticVar++);
}
