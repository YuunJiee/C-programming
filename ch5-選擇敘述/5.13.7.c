/* selDebug7.c */

#include <stdio.h>
#include <stdlib.h>

int main () {
	int chioce = 1;
	switch(chioce) {
		case 1 :
			printf("Your are NO.1 student.\n");
			break;
		case 2 :
			printf("Your are NO.2 student.\n");
			break;
		case 3 :
			printf("Your are NO.3 student.\n");
			break;
		default :
			printf("Your are not my student.\n");
			break;
	}
	return 0;
}
