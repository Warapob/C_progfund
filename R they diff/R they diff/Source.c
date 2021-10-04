#include<stdio.h>
char a ,b;
int main() {
	scanf("%c %c", &a, &b);
	if ((a == b + 32) || (a == b - 32)||(a==b)) {
		printf("%c\' and \'%c\' are the same character.",a,b);
	}
	
	else {
		printf("TOO DIFFERENCE!!");
	}
}