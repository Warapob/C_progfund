#include<stdio.h>
int scn,x;
int main() {
	while (1) {
		scanf("%d", &scn);
		if (scn == -1) {
			printf("%d", x);
			break;
		}
		x = x + scn;
	}
}