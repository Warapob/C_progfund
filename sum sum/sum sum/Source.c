#include<stdio.h>
int a, b,  sum = 0;
int main() {
	scanf("%d %d", &a, &b);
	if (a > b) {
		int d = a, c = b;
		for (int i = c; i <= d; i++) {
			sum = i + sum;
		}
		printf("%d", sum);
	}
	else if (a < b) {

		for (int i = a; i <= b; i++) {
			sum = i + sum;
		}
		printf("%d", sum);
	}
	else if (a == b) {
		printf("%d", a);
	}
}