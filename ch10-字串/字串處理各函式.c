/* �r��B�z-���סB�ƻs�B�s�� */
#include <stdio.h>
#include <string.h> //���b��

int main () {
	char *msg1 = "String ABCDEF";
	char dest1[30] = "garbage";
	char dest2[30] = "garbage";
	char dest3[30] = "garbage ";
	char dest4[30] = "garbage ";
	char *dest5;
	
	//�p��r����� 
	printf("Lenfth of String <%s> is %d\n", msg1, strlen(msg1)); 
	
	//�����r��-�ݭn���w�Ŷ��j�p 
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest1);
	strcpy(dest1, msg1);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest1);
	
	//�����r��en�Ӧr��
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest2);
	strncpy(dest2, msg1, 9);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest2);
	
	//�r��s��-�ݭn���w�Ŷ��j�p 
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest3);
	strcat(dest3, msg1);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest3);
	
	//�s���en�Ӧr
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest4);
	strncat(dest4, msg1, 6);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest4);
	
	//�ƻs�r��-��ۦ�t�m�A��Ŷ��õ�����} 
	printf("\nSource string : <%s>\n", msg1);
	dest5 = strdup(msg1);
	printf("Dest string : <%s> at %p\n", dest5 ,dest5);
	
	
	return 0;
} 
