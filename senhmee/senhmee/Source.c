#include<stdio.h>
#include<math.h>

int scn1[1],scn2[1],x,y;
double dis;

int main() {
	scanf("%d,%d", &scn1[0], &scn1[1]);
	scanf("%d,%d", &scn2[0], &scn2[1]);
	x = (scn1[0] - scn2[0]);
	x = pow(x, 2);
	y = (scn1[1] - scn2[1]);
	y = pow(y, 2);
	dis = x + y;
	dis = sqrt(dis);
	printf("%.6lf", dis);
}