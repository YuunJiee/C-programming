#include <stdio.h>
int fun(int, int);

int main () {
	int x, y, ans;
	printf("Please enter x and y (x,y): ");
	scanf("%d,%d", &x, &y);
	ans = fun(x, y);
	printf("F(%d, %d) = %d", x, y, ans);
	return 0;
} 

int fun(int x, int y) {
	if( x < 0 || y < 0) {
		return x-y;
	}else {
		return fun(x-1, y) + fun(x, y-1);
	}
}
