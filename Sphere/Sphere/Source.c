#include<stdio.h>
#include<math.h>
#define PI  3.1415926535897932384626433
double r,v;
int main() {
	scanf("%lf", &r);
	v = pow(r,3)*PI*4/3;
	printf("%.8lf", v);
}
