#include<stdio.h>
int scn;
int main() {
	scanf("%d", &scn);
	scn = (scn * scn * scn) + (3 * scn * scn) + (2 * scn);
	printf("%d", scn);
}