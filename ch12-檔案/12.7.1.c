#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {
	FILE *fptr;
	char ch;
	
	fptr = fopen("D:\\test.dat", "w");
	printf("write data into file...press [Enter] to quit\n");
	while((ch = getche()) != '\r') {
		fputc(ch, fptr);
	}
	fclose(fptr);
	
	fptr = fopen("D:\\test.dat", "r");
	printf("\n\n");
	printf("read data from file...\n");
	while((ch = fgetc(fptr)) != EOF) {
		printf("%c", ch);
	}
	fclose(fptr);
	printf("\n");
	system("PAUSE");
	return 0;
} 
