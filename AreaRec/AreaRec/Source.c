#include<stdio.h>
double a, b, c;
int main() {
	scanf("%lf %lf", &a, &b);
	c = a * b;
	if (c >= 0 && (a > 0 || b > 0)) {
		printf("Area = %.6lf x %.6lf = %.6lf", a, b, c);
	}
	else {
		printf("Error");
	}
}