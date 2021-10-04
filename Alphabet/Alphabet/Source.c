#include<stdio.h>
int n[5];
int main() {
	//96
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < 5; i++) {
		n[i] = n[i] + 96;
	}
	for (int i = 0; i < 5; i++) {
		printf("%c\n", n[i]);
	}
}