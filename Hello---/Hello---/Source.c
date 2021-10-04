#include<stdio.h>
char scn[99];
int main() {
	scanf("%[^\n]s", &scn);
	printf("Hello %s \\(\"^\")/!!!",scn);
}