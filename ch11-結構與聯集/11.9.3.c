#include <stdio.h>
#include <stdlib.h>

struct job {
	char *jobname;
	float pay;
};

void double_pay(struct job *);

int main () {
	struct job peter, *ptr;
	peter.jobname = "manager";
	peter.pay = 200.86;
	ptr = &peter;
	printf("%.2f\n", ptr->pay);
	double_pay(ptr);
	printf("%.2f\n", ptr->pay);
	
	return 0;
}

void double_pay(struct job *test) {
	test->pay *= 2.0;
}
