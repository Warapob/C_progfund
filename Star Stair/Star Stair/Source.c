#include<stdio.h>
int i;
int main() {
	scanf("%d", &i);
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < i; k++) {
			printf("* ");
		}
		printf("\n");
	}
}