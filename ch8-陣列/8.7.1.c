/* Bubble sort */
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int[], int);

int main () {
	int data[5] = {18, 2, 20, 34, 12};
	int i;

	printf("Number: ");
	for(i = 0; i < 5; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	
	printf("\nBubble sorting...\n\n");
	bubbleSort(data, 5);
	
	return 0;
} 

void bubbleSort(int data[], int n) {
	int i ,j ,k ,temp = 0;
	
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-1; j++) {              //要注意 int data[n]的最後一個值是 data[n-1] 
			if(data[j] > data[j+1]) {
				temp = data[j+1];
				data[j+1] = data[j];
				data[j] = temp;
			}
		}
		printf(" Access: ");
		for(k = 0; k < 5; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");
	}
}
