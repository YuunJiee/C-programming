#include <stdio.h>
#include <stdlib.h>
#define PASSWD 1462
#define TRUE 1
#define FALSE 0

int main () {
	int passwd;
	int ok,try;
	ok = FALSE;
	try = 1;
	
	do {
		printf("%d. Enter your password :¡@\n ", try++);
		scanf("%d", &passwd);
		if(passwd == PASSWD) {
			ok = TRUE;
		}
	}while (!ok &&(try <= 3));
	
	if(ok) {
		printf("\n Congratulations !\n");
	}else {
		printf("\n You are rejected !\n");
	}
	return 0;
}
