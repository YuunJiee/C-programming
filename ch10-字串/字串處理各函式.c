/* 字串處理-長度、複製、連結 */
#include <stdio.h>
#include <string.h> //都在此

int main () {
	char *msg1 = "String ABCDEF";
	char dest1[30] = "garbage";
	char dest2[30] = "garbage";
	char dest3[30] = "garbage ";
	char dest4[30] = "garbage ";
	char *dest5;
	
	//計算字串長度 
	printf("Lenfth of String <%s> is %d\n", msg1, strlen(msg1)); 
	
	//拷貝字串-需要指定空間大小 
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest1);
	strcpy(dest1, msg1);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest1);
	
	//拷貝字串前n個字元
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest2);
	strncpy(dest2, msg1, 9);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest2);
	
	//字串連結-需要指定空間大小 
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest3);
	strcat(dest3, msg1);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest3);
	
	//連結前n個字
	printf("\nSource string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest4);
	strncat(dest4, msg1, 6);
	printf("Source string : <%s>\n", msg1);
	printf("Dest string : <%s>\n", dest4);
	
	//複製字串-能自行配置適當空間並給予位址 
	printf("\nSource string : <%s>\n", msg1);
	dest5 = strdup(msg1);
	printf("Dest string : <%s> at %p\n", dest5 ,dest5);
	
	
	return 0;
} 
