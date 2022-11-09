//可以改善成資料數目隨檔案而變 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define NUM 5
#define filename "12.8.2.txt"

struct student {
	char id[8];
	char name[8];
	int score;
};

int main () {
	FILE *fptr;
	int i;
	int r;
	struct student who[NUM];
	struct student unit;
	char key;
	
	if((fptr = fopen(filename, "rb+")) == NULL) {
		printf("\nCan't open file : %s", filename);
		exit(0);
	}
	
	printf("\nData listing...\n\n");
	printf(" ID	   NAME       SCORE\n");
	printf("-----------------------------\n");
	for(i = 0; i < NUM; i++) {
		fscanf(fptr, "%s %s %d", who[i].id, who[i].name, &who[i].score);  //要注意 & 
		printf("%-10s %-8s %5d\n", who[i].id, who[i].name, who[i].score);
	}
	printf("-----------------------------\n");
	
	printf("\nRandom seek...\n");
	do {
		r = rand() % NUM;
		fseek(fptr, r * sizeof(struct student), SEEK_SET);
		fread(&unit, sizeof(struct student), 1, fptr);
		printf("\n%-10s %-8s %5d\n", who[r].id, who[r].name, who[r].score);
		printf("One more(y/n)? ");
	}while(getche() == 'y');
	
	return 0;
	
} 
