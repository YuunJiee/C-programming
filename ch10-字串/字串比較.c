/* 字串比較 */
#include <stdio.h>
#include <string.h>

int main () {
	char *msg1 = "ABCDEFG";
	char *msg2 = "abcdefg";
	char *msg3 = "abcd";
	char *msg4 = "^[]?";

	
	//比較整個字串，相同為0，順序較小回傳-1，較大回傳1
	printf("<%s> compare <%s> : %d\n", msg1, msg1, strcmp(msg1, msg1));
	printf("<%s> compare <%s> : %d\n", msg1, msg2, strcmp(msg1, msg2));
	printf("<%s> compare <%s> : %d\n", msg2, msg3, strcmp(msg2, msg3));
	
	
	//比較前n個字元
	printf("\n<%s> compare <%s> (前4個): %d\n", msg2, msg3, strncmp(msg2, msg3, 4));
	
	//比較字串，不分大小
	printf("\n<%s> compare <%s> : %d\n", msg1, msg2, stricmp(msg1, msg2));
	
	return 0;
}
