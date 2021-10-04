#include<stdio.h>
main() {
	char name[9];
	int age;
	float time;
	printf("Enter nickname :");
	scanf("%s", &name);
	printf("\nEnter age :");
	scanf("%d", &age);
	printf("\nEnter finish time :");
	scanf("%f", &time);
	printf("\nyour nickname is %s", name);
	printf("\nyour age is %d", age);
	printf("\nfinished time is %.2f", time);

}