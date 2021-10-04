#include<stdio.h>
void triangle(int n) {
	
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int a;
	scanf("%d", &a);
	triangle(a);
}
