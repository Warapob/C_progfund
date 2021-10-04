#include<stdio.h>
int s;
int main() {
	scanf("%d", &s);
	for (int i = 0; i < s; i++) {
		for (int j = 0;  j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}