#include <stdio.h>

int main() {
	char ans[10] = {'A', 'A', 'B', 'C', 'D', 'C', 'A', 'B','D', 'D'};
	char inputAns[10];
	int index = 0;
	int i = 1, j;
	int t = 0,f = 0, s;
	
	do {
		printf("%d. question answer (A¡BB¡BC¡BD): ", i++);
		scanf("%c", &inputAns[index++]);
		getchar(); //¥Î¨Ó©ñ\n!!! 
	}while(index < 10);
	
	for(j = 0; j < 10; j++) {
		if(inputAns[j] == ans[j]) {
			t++;
		}else {
			f++;
		}
	}
	s = t*10;
	
	printf("\nRight: %d, Wrong: %d\n", t, f);
	printf("Score: %d", s);
}
