#include<stdio.h>
int scn,a;
int main() {
	scanf("%d", &scn);
	if (scn<4 ) {
		printf("%d", scn * 249);
		
	}
	else {
		printf("%d", (scn-(scn/4)) * 249);
	}
}