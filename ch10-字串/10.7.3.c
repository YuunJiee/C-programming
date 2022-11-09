#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char *msg1 = " 95 Aero";
	char *msg2 = " 95";
	char dest[30] = "SAAB";
	
	strcat(dest, msg1);
	printf("\nMy car is ... %s\n", dest);
	strncat(dest, msg2, 3);
	printf("\nMy car is ... %s\n", dest);
	
	return 0;
	
}
