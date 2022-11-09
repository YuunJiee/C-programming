/* Queue 先進先出*/ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node {
	char data;
	struct node *link;
}Node;

void show(Node *);
void add(Node **,char);
void del(Node **);

int main () {
	char key, data;
	
	Node *head = NULL;
	
	printf("********\n");
	printf("1. add\n");
	printf("2. delete\n");
	printf("3. show\n");
	printf("4. exit\n");
	printf("********\n");

	while(1) {
		key = getch();
		switch (key) {
			case '1' :  printf("\n<%c.Add>\n",key);
						printf("Input a chatacter: ");
				  	  	data = getche();
				  	  	add(&head, data);
				  	  	break;
				  	  	
			case '2' :  printf("\n<%c.Delete>",key);
				  	  	del(&head);
				  	  	break;
				  	  
			case '3' :  printf("\n<%c.Show>",key);
						show(head);
				  	  	break;
				  	  	
			case '4' :  printf("\nBye Bye !\n");
						exit(1);
			default  : continue;
		}
	}
	return 0;
}
/***********************************************/
void add(Node **start, char ad) {
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->data = ad;
	new_node->link = NULL;
	
	if (*start == NULL) {
		*start = new_node;
	}else {
		Node *current;
		current = *start;
		while(current->link != NULL) {
			current = current->link;
		}
		current->link = new_node;
	}
	printf("\nCharacter '%c' is added.\n", ad);
}
/***********************************************/
void del(Node **node) {
	Node *prev = *node;
	if(prev != NULL) {
		*node = prev->link;
		printf("\nCharacter '%c' is delete.\n", prev->data);
		free(prev);
	}else {
		printf("\nThere is no character.\n");
	}
}
/***********************************************/
void show(Node *node) {
	printf("\n");
	while(node != NULL) {
		printf("|%c|\n", node->data);
		node = node->link;
	}
}





