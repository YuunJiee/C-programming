/* �r���� */
#include <stdio.h>
#include <string.h>

int main () {
	char *msg1 = "ABCDEFG";
	char *msg2 = "abcdefg";
	char *msg3 = "abcd";
	char *msg4 = "^[]?";

	
	//�����Ӧr��A�ۦP��0�A���Ǹ��p�^��-1�A���j�^��1
	printf("<%s> compare <%s> : %d\n", msg1, msg1, strcmp(msg1, msg1));
	printf("<%s> compare <%s> : %d\n", msg1, msg2, strcmp(msg1, msg2));
	printf("<%s> compare <%s> : %d\n", msg2, msg3, strcmp(msg2, msg3));
	
	
	//����en�Ӧr��
	printf("\n<%s> compare <%s> (�e4��): %d\n", msg2, msg3, strncmp(msg2, msg3, 4));
	
	//����r��A�����j�p
	printf("\n<%s> compare <%s> : %d\n", msg1, msg2, stricmp(msg1, msg2));
	
	return 0;
}
