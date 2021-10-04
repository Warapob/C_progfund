#include<stdio.h>
int scn;
int main() {
	scanf("%d", &scn);
	if (scn >= 0) {
		if (scn <= 11) {
			printf("%d -> Kid",scn);
		}
		else if (scn <= 20) {
			printf("%d -> Teen",scn);
		}
		else if (scn <= 60) {
			printf("%d -> Adult",scn);
		}
		else if (scn > 60) {
			printf("%d -> old",scn);
		}
	}
	else {
		printf("Error");
	}
}
