#include<stdio.h>
#include<math.h>
float n;
int a;
int main() {
	scanf("%f", &n);
	n = n / 8;
	a = ceil(n);
	printf("%d", a);
}