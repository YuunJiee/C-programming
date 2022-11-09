#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char strg[10] = {'S', 'A', 'A', 'B', '\0'};
	char strarr[10] = "SAAB";
	char *strpp = "SAAB";
	char strb[10] = {'S', 'A', 'A', 'B'}; // Bad expression
	
	printf("\n My car is %s\n", strg);
	printf("\n My car is %s\n", strarr);
	printf("\n My car is %s\n", strpp);
	printf("\n My car is %s\n", strb);
	
} 
