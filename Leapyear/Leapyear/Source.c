#include<stdio.h>
int year;
int main() {
	scanf("%d", &year);
	year = year - 543;
	if ((year % 4) == 0) {
		if (year % 400 == 0||year%4==0) {
			printf("365");
		}
		else if (year % 100 == 0) {
			printf("366");
		}
	}
	else if (year < 0) {
		printf("error");
	}
	else {
		printf("365");
	}
}