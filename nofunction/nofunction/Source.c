#include<stdio.h>
int a, b, c, d;
int main() {
	scanf("%d %d %d %d", &a, &b, &c, &d);
	a = b;
	b = c;
	c = d;
	printf("a = %d b = %d c = %d", a, b, c);
}