#include<stdio.h>
int day;
int main() {
	scanf("%d", &day);
	if (day % 2 == 0 && day % 3 != 0) {
		if (day > 30 || day < 1) {
			printf("Invalid date.");
		}
		else {
			printf("Cactus");
		}
	}
	else if (day % 3 == 0 && day % 2 != 0) {
		if (day > 30 || day < 1) {
			printf("Invalid date.");
		}
		else {
			printf("Bowstring Hemp");
		}
	}
	else if (day % 3 == 0 && day % 2 == 0) {
		if (day > 30 || day < 1) {
			printf("Invalid date.");
		}
		else {
			printf("Both of them.");
		}
	}
	else if (day % 3 != 0 && day % 2 != 0) {
		if (day > 30 || day < 1) {
			printf("Invalid date.");
		}
		else {
			printf("Nothing.");
		}
	}
}