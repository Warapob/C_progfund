#include<stdio.h>
float mon,total;
int main() {
	scanf("%f", &mon);
	total = mon * 1.07 * 1.1;
	printf("%.2f", total);
}