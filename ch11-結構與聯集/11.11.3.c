/* structDebug3.c */
#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[20];
	int score;
};

struct car
{
    char make[20];
    char model[30]; 
    int year;
};

int main () {
	struct student stu[3] = {{"Amy", 90}, {"Tina", 85}, {"Sam", 90}};
	int i;
	printf("%-16s %-20s\n", "name","score");
	printf("---------------------------------\n");
	for(i = 0; i < 3; i++) {
		printf("%-16s %-8d\n", stu[i].name, stu[i].score);
	}
	printf("---------------------------------\n");
	
	return 0;
}

