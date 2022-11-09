#include <stdio.h>
#include <windows.h>

int main () {
	int num[6],guess[6];
	int i, t = 0;
	
	for (i = 0; i < 6 ; i++) {
		num[i] = (rand()%100)+1;
	}
	
	for (i = 1; i <= 6; i++) {
		printf("%d.Please enter the numbers you guess: ", i);
		scanf("%d", &guess[i-1]);
	}
	
	for(i = 0; i < 6; i++) {
		if(num[i] == guess[i]) {
			t++;
		}
	}
	printf("\n");
	
	printf("You Guess:       ");
	for (i = 0; i < 6; i++) {
		printf("%5d ", guess[i]);
	}
	printf("\n");
	
	printf("Winning numbers: ");
	for (i = 0; i < 6; i++) {
		Sleep(1000);
		printf("%5d ", num[i]);
	}
	printf("\n\n");
	
	if(t == 6) {
		printf("You win the jackpot !!! \n");
	}else {
		printf("You don't win... \n");
	}
	
	return 0;
	
}
