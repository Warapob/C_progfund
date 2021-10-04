#include<stdio.h>
char name[99];
int dis, run,per;
int main() {
	scanf("%s %d %d", &name ,&dis, &run);
	per = 100 * run / dis;
	printf("%s %d%%",name, per);
}