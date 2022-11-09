#include <stdio.h>
#define SIZE 5

void autoFun(void);
void externFun(void);
void defaultFun(void);

int ary[SIZE] = {1, 2, 3, 4, 5};

int main () {
	printf("extern variable testing... \n\n");
	
	autoFun();
	externFun();
	voidFun();
	defaultFun();
	
	return 0;
}

void autoFun(void) {
	auto int ary[SIZE];
	int i;
	
	printf("In autoFun() :\n\n");
	for(i = 0; i < SIZE; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	printf("\n\n");
}

void externFun(void) {
	extern int ary[SIZE];
	int i;
	
	printf("In externFun() :\n\n");
	for(i = 0; i < SIZE; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	printf("\n\n");
}

void voidFun(void) {
	int i;
	
	printf("In voidFun() :\n\n");
	for(i = 0; i < SIZE; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	printf("\n\n");
}


void defaultFun(void) {
	int ary[SIZE];
	int i;
	
	printf("In defaultFun() :\n\n");
	for(i = 0; i < SIZE; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	printf("\n\n");
}





