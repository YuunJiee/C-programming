#include <stdio.h>
void extern_circleArea(void);
void auto_circleArea(void); 

int r = 10;

int main () {
	extern_circleArea();
	auto_circleArea();
} 

void extern_circleArea(void) {
		extern int r;
		
		printf("A circle radius = %d, The area = %.2f\n", r, (float)r*r*3.14);
}

void auto_circleArea(void) {
		auto int r;
		
		printf("A circle radius = %d, The area = %.2f\n", r, (float)r*r*3.14);
}
