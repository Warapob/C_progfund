#include<stdio.h>
int i, no;
int main() {
	scanf("%d", &no);
	if (no >= 0) {
		for (int i = 0; i < no; i++) {
			for (int j = 0; j < no - i - 1; j++) {
				printf(" ");
			}
			if (i + 1 <3) {
				for (int k = 0; k < i + 1; k++) {
					printf("* ");

				}
			}			
			else {
				printf("*");
				for (int l = 0; l < i + 1; l=l+2) {
					printf(" ");
				}
				printf("*");
			}

			printf("\n");
		}
		for (int i = no; i > 0; i--) {
			for (int j = no - i + 1; j > 0; j--) {
				printf(" ");
			}
			for (int k = i - 1; k > 0; k--) {
				printf("* ");
			}
			printf("\n");
		}
	}
	else {
		printf("Error");
	}
}