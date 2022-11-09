#include <stdio.h>
#include <stdlib.h>
void strCat(char * ,char *);
int strLen(const char *);

int main () {
	char *msg = "Anna Zhong";
	char dest[30] = "313";
	
	printf("Source string : <%s>\n", msg);
	printf("Dest string : <%s>\n", dest);
	strCat(dest, msg);
	printf("Source string : <%s>\n", msg);
	printf("Dest string : <%s>\n", dest);
}

int strLen(const char *str) {
	unsigned int count;
	
	for(count = 0; *str != '\0'; str++, count++);
	
	return count;
}

void strCat(char *dest, char *msg) {
	int i;
	int destLen = strLen(dest);
	
	for(i = 0; msg[i] != '\0'; i++) {
		dest[destLen+i] = msg[i];
	}
}
