#include<stdio.h>
char s[999];
int main() {
	scanf("%[^\n]s", &s);
	printf("%30s", s);
}