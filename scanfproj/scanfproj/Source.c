#include<stdio.h>
char name[9];
int age;
float time;
int main() {
	printf("Enter nickname : ");
	scanf("%s", &name);
	printf("Enter age : ");
	scanf("%d", &age);
	printf("Enter finished time : ");
	scanf("%f", &time);
	printf("your nickname is %s", name);
	printf("\nyour age is %d", age);
	printf("\nfinished time is %.2f", time);
}
