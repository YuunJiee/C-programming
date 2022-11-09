/* strDebug6.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str1[] = "Apple's";
	char str2[] = " MAC";
	strcat(str1, str2);
	printf("str1 + str2 = %s\n", str1);
	
	return 0;
} 
