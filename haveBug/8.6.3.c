/* selection sort program */
#include <stdio.h>
#include <stdlib.h>
void selectSort(int[], int);

int main() {
	int data[6] = {22, 9, 28, 36, 17, 6};
	int i;
	printf("Number : ");
	for(i = 0; i < 6; i++) {
		printf("%d ",data[i]);
	}
	printf("\n");
	selectSort(data, 6);
	printf("Sorting : ");
	for(i = 0; i < 6; i++) {
		printf("%d ",data[i]);
	}
	
	return 0;
}

void selectSort(int data[], int n) {
	int i, j, k, min, temp;
	for(i = 0; i < n-1; i++) {
		min = i;
		for(j = i+1; j < n; j++) {
			if(data[j] < data[min]) {
				min = j;
			}
		}
		temp = data[min];
		data[min] = data[i];
		data[i] = temp;
		printf("Access : ");
		for(k = 0; k < n; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");
	}
}
