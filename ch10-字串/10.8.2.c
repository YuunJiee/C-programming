#include <stdio.h>
#include <stdlib.h>
void strCpy(char * ,char *);

int main () {
	char *msg = "Anna Zhong";
	char dest[30] = "313";
	
	printf("Source string : <%s>\n", msg);
	printf("Dest string : <%s>\n", dest);
	strCpy(dest, msg);
	printf("Source string : <%s>\n", msg);
	printf("Dest string : <%s>\n", dest);

}

void strCpy(char *dest, char *msg) {
	int i;
	
	for(i = 0; msg[i] != '\0'; i++) {
		dest[i] = msg[i];
	}
	
}
