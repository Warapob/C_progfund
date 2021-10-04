#include<stdio.h>
int n[10], max, min, sum;
float avg;
int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	}
	max = n[0];
	for (int i = 0; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	min = n[0];
	for (int i = 0; i < 10; i++) {
		if (n[i] < min) {
			min = n[i];
		}
	}
	for (int i = 0; i < 10; i++) {
		sum = n[i] + sum;
	}
	avg = sum / 10;
	printf("MAX: %d\nMIN: %d\nSUM: %d\nAVG: %.2f", max, min, sum, avg);
}