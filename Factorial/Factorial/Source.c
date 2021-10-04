#include<stdio.h>
long double num[20],k,j;
int main() {
	for (int i = 0; i < 20; i++) {
		scanf_s("%Lf", &num[i]);
	}
	for (int i = 0; i < 20; i++) {
		j = 1;
		for ( k = 1; k <= num[i]; k++) {
			j = j * k;
		}
		printf("%.0Lf \n", j);
	}
}