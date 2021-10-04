#include<stdio.h>
float x;
int main() {
	scanf("%f", &x);
	if (x <= -1) {
		x = (x * x) + 1;
		printf("%.2f", x);
	}
	else if (x > -1 && x < 2) {
		x = x + 4;
		printf("%.2f", x);
	}
	else if (x >= 2) {
		x = 5;
		printf("%.2f", x);
	}
}