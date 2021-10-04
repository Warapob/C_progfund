#include<stdio.h>
int n[3];
int main() {
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (int i = 0; i < 3; i++) {
		if (i < 2) {
			printf("%d and %d are equal.\n", n[0+i], n[1+i]);
			if (n[0+i] == n[1+i]) {
				printf("This sentence is True.\n");
			}
			else {
				printf("This sentence is False.\n");
			}
		}
		else if (i == 2) {
			printf("%d and %d are equal.\n", n[0], n[2]);
			if (n[0] == n[2]) {
				printf("This sentence is True.\n");
			}
			else {
				printf("This sentence is False.\n");
			}
		}
	}
	
}