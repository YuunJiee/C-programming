#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
	char data;
	struct node *link;
}head;

void show();
void insert(char);
void delete(char);
void search(char);

int main () {
	char key, data;
	
	head.link = NULL;
	printf("-------------------------------\n");
	printf("\n Function: 0 [EXIT]	1[SHOW]");
	printf("\n           2 [INSERT] 3[DELETE] 4[SEARCH]");
	printf("\n\n");
	
	while(1) {
		key = getch();
		switch (key) {
			case '0' : printf("\nBye Bye !\n");
					   exit(1);
			case '1' : printf("\n <%c : Listing... >", key);
					   show();
					   break;
			case '2' : printf("\n <%c : Insert one character > Input: ", key);
					   data = getche();
					   insert(data);
					   break;
			case '3' : printf("\n <%c : Delete one character > Delete: ", key);
					   data = getche();
					   delete(data);
					   break;
			case '4' : printf("\n <%c : Search a character > Which: ", key);
					   data = getche();
					   search(data);
					   break;
			default  : continue;
		}
	}
	
	return 0;
}

/************************************************************************************/

void show() {
	struct node *current;
	int count;
	current = head.link;
	for(count = 0; current != NULL; current = current->link, count++) {
		printf("%3c", current->data);
	}
	printf("\n %d character %s in total\n", count, (count>1) ? "s" : " "); //�����O�_�O�Ƽ� 
}

/************************************************************************************/

void insert(char ins) {
	struct node *current, *prev, *ptr;
	prev = &head;
	current = prev->link;
	
	while(current != NULL && current->data < ins) {
		prev = current;
		current = current->link;
	}
	
	if((current != NULL) && (current->data == ins)) {
		printf("\n character '%c' existed!\n", ins);
		return;
	}
	
	if((ptr = (struct node*)malloc(sizeof(struct node))) == NULL) {
		printf("\n Not enough memory\n");
		return;
	}
	
	/* construct link list */
	ptr->data = ins;
	ptr->link = current;
	prev->link = ptr;
	
	printf("\n character '%c' inserted OK\n", ins);
} 

/************************************************************************************/

void  delete (char del) {
	struct node *current, *prev;
	prev = &head;
	current = prev->link;
	
	while(current != NULL && current->data < del) {
		prev = current;
		current = current->link;
	}
	
	if(current != NULL && current->data == del) {
		prev->link = current->link;
		free(current);
		printf("\n character '%c' delete OK\n", del);
	}else {
		printf("\n character '%c' not existed!\n", del);
	}
}

/************************************************************************************/

void search(char sear) {
	struct node *current;
	int count = 1;
	current = head.link;
	
	while(current != NULL && current->data < sear) {
		current = current->link;
		count++;
	}
	
	if((current != NULL) && (current->data == sear)) {
		printf("\n character '%c' is #%d!\n", sear, count);
	}else {
		printf("\n character '%c' not existed!\n", sear);
	}
}




















