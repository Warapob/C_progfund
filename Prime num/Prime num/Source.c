#include<stdio.h>
int isPrime();
int main() {
	int n;
	scanf("%d", &n);
	int a = isPrime(n);
	if (a == 1) {
		printf("Yes",n);
	}
	else if (a == 0) {
		printf("NO", n);
	}
	
}
int isPrime(int x) {
	for (int i = 2; x % i == 0; i++) {
		if (i!=x && x%i == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
}