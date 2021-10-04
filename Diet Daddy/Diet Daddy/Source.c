#include<stdio.h>
#include<math.h>
float w2,w1,week1;
int  day, week2,week3;
int main() {
	scanf("%f", &w1);
	if (w1 >= 0.2) {
		w2 = w1 * 10 / 100;
		printf("w2 %f\n", w2);
		week1 = w2*10 / 2;
		week2 =ceil(week1);
		printf("week1 %d\n", week2);
		day = week2 % 7;
		printf("day %d\n", day);
		week3 = week1 / 7;
		printf("week3 %d\n", week3);
		printf("Takes about %d weeks %d days", week3, day);
	}
	else {
		printf("ERROR");
	}
}