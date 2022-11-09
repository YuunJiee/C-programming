/* structDebug5.c */
#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[20];
	int score;
	struct student *next;
} ;

int main () {
	int choice = 0;
	struct student *head;
	struct student *ptr;
	struct student *current;
	
	head = (struct student*)malloc(sizeof(struct student));
	head = NULL;
	
	while (choice < 4) {
		printf("********\n");
		printf("1. add\n");
		printf("2. show\n");
		printf("3. exit\n");
		printf("********\n");
		printf("Choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1 : 
					 ptr = (struct student*)malloc(sizeof(struct student));
					 printf("Input name: ");
					 scanf("%s", ptr->name);
					 printf("Input score: ");
					 scanf("%d", &ptr->score);
					 ptr->next = head;
					 head = ptr;
					 break;
					 
			case 2 : current = head;
					 printf("\n%-16s%-20s\n", "NAME", "SCORE");
					 printf("------------------------------\n");
					 while (current != NULL) {
					 	printf("%-16s%-8d\n", current->name, current->score);
					 	current = current->next;
					 }
					 printf("------------------------------\n");
					 break;	 
		}
	}
	return 0;
}






















