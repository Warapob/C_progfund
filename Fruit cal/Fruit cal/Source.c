#include<stdio.h>
int  n;
float total, fruit[99],mon[99];
int main(void) {
	scanf("%d", &n);
	fruit[99] = fruit[n];
	mon[99] = mon[n];
	for (int i = 0; i < n; i++) {
		scanf("%f %f", fruit[i], mon[i]);
	}
	for (int i = 0; i < n; i++) {
		total = (fruit[i] * mon[i]) + total;
	}
	printf("%.2f", total);
	

}