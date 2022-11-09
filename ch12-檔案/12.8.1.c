#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fptr;
	char ch;
	int count_c = 0;
	int count_b = 0;
	int count_n = 0;
	
	fptr = fopen("12.8.1.txt", "r");
	while (fscanf(fptr, "%c", &ch) == 1) {
		count_c++;
		if(ch == ' ') {  //要用單引號!! 
			count_b++;
		}
		if(ch == '\n') {
			count_n++;
		}
	}
	printf("\nChatacters: %d\n", count_c);
	printf("Blank: %d\n", count_b);
	printf("Newline: %d\n\n", count_n);
	
	fclose(fptr);
	system("PAUSE");
	return 0;
}

