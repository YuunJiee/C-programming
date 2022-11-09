/* selDebug4.c */

#include <stdio.h>
#include <stdlib.h>

int main () {
	int score = 70;
	if(score >= 80) {
		printf("Very good!!!\n");
	}else if (score >= 60) {
		printf("Pass!!!\n");
	}else 
		printf("Failed...");
	return 0;
} 
