#include<stdio.h>
long long num,a;
int main() {
	scanf("%lli", &num);
	if (num > 0) {
		for (int i = 0; i <= num; i++) {
			a = a + i;
		}
	printf("%lli", a);
	}
	else {
		printf("Error");
	}
}