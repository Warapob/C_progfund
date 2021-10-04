#include<stdio.h>
double avg,scn_1, scn_2, scn_3;
int main() {
	scanf("%lf%lf%lf", &scn_1, &scn_2, &scn_3);
	avg = (scn_1 + scn_2 + scn_3) / 3;
	printf("%.2lf",avg);
}