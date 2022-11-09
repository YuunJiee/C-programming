#include <stdio.h>
#define MAX 6

int main () {
	int i;
	i = 0;
	while (++i < MAX) {
		printf("%d\n", i );
	}
	return 0;
}
