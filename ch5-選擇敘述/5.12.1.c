#include <stdio.h>
#include <stdlib.h>

int main () {
	int time, length;
	double gsum = 0, nsum = 0;
	
	printf("Please enter the call time (24hr): ");
	scanf("%d", &time);
	printf("Please enter the call length (min): ");
	scanf("%d", &length);
	
	gsum = 0.4*length;

	if ( time < 8 || time > 18) {
		nsum = 0.5 * gsum;
	}else {
		nsum = gsum;
	}
	if ( length > 60 ) {
		nsum = 0.85*nsum;
	}
	nsum = 1.04*nsum;
	
	printf("The nsum = %.2lf", nsum);
	return 0;
} 
