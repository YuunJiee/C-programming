#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void op(int, int, char);

int main (int argc, char *argv[]) {
	char operator;
	int op1, op2;
	
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	
	if(!stricmp(argv[2],"add")) {
		operator = '+';
	}else if (!stricmp(argv[2], "minus")) {
		operator = '-';
	}else if (!stricmp(argv[2], "mul")) {
		operator = '*';
	}else if (!stricmp(argv[2], "div")) {
		operator = '/';
	}
	op(op1, op2, operator);
}

void op(int op1, int op2, char operator) {
	switch (operator) {
		case '+' :
			printf("%d + %d = %d\n", op1, op2, op1 + op2);
			break;
		case '-' :
			printf("%d - %d = %d\n", op1, op2, op1 - op2);
			break;
		case '*' :
			printf("%d * %d = %d\n", op1, op2, op1 * op2);
			break;
		case '/' :
			printf("%d / %d = %.2f\n", op1, op2, (float)(op1 / op2));
			break;
	}
}
