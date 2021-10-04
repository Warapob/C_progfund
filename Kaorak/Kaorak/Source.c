#include<stdio.h>
int firstp, endp, range;
int main() {
	scanf("%d %d %d", &firstp, &endp, &range);
	if (firstp <= endp && range > 0) {
		for (int i = firstp; firstp <= endp; firstp = firstp + range) {
			printf("%d\n", firstp);
		}
	}
	else if (firstp >= endp && range < 0) {
		for (int i = firstp; firstp >= endp; firstp = firstp + range) {
			printf("%d\n", firstp);
		}
	}
	else {
		printf("Go to hell");
	}
}