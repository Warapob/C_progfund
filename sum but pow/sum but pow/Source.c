#include<stdio.h>
int a,b,sum=0;
int main() {
	scanf("%d %d", &a,&b);
	for (int i = a; i <= b; i++) {
		sum = (i*i) + sum;
	}
	printf("%d", sum);
}
