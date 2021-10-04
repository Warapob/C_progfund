#include<stdio.h>
float n;
int main() {
	scanf("%f", &n);
	if (n > 180) {
		printf("Yes %.2f Baht",n-180);
	}
	else {
		printf("No");
	}
}