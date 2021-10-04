#include<stdio.h>
int scn,num;
int main() {
	scanf("%d", &scn);
	num = scn % 2;
	if (scn < 0) {
		printf("Error");
	}
	else if (num == 0) {
		printf("even");
	}
	else if (num == 1) {
		printf("odd");
	}
}

