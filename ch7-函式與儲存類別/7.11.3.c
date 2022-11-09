/*¹õ¨ç¼Æ power function*/ 

#include <stdio.h>
int power(int, int);

int main () {
	int x,n,ans;
	printf("Please enter number x and n (x^n): ");
	scanf("%d^%d",&x, &n);
	ans = power(x, n);
	printf("(%d^%d) = %d",x, n, ans);
}

int power(int x, int n) {
	int total;
	if (n == 0) {
		return 1;
	}else {
		return total = x * power(x, n-1);
	}
}
