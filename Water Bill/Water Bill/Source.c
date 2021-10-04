#include<stdio.h>
int n;
float total;
int main() {
	scanf("%d", &n);
	if (n - 6 >= 0) {
		total = 18.5 * n;
		printf("%.2f baht", total);
	}
	else {
		printf("100 baht");
	}
}