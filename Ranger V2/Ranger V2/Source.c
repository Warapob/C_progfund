#include<stdio.h>
int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n*n; i++) {
		printf("%d\n", i);
	}
}