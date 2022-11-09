/* strDebug4.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
	char *str[6] = {"Tom", "and", "Jerry"};
	int strLen = 6;
	int i;
	printf("Print all strings (use for loop): \n");
	for(i = 0; i < strLen; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}
