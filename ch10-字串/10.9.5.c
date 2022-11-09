/* strDebug5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str1[] = "C language";
	int length = strlen(str1);
	char str2[11];
	
	strcpy(str2, str1);
	
	printf("str1 = %s\n", str1);
	printf("Length of str1 = %d\n", length);
	printf("str2 = %s\n", str2);
	
	return 0;
}
