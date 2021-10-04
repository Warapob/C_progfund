#include<stdio.h>
double r,area;

int main() {
	scanf("%lf", &r);
	if (r >= 0) {
		area = r * r * 22 / 7;
		printf("%.6lf", area);
	}
	else {
		printf("Error");
	}


}
