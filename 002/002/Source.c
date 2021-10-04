#include<stdio.h>
main() {
	char name;
	int age;
	float time;
	printf("Enter nickname :\n");
	scanf("%c", &name);
	printf("Enter age :\n");
	scanf("%d", &age);
	printf("Enter finish time :\n");
	scanf("%f", &time);
	printf("your nickname is %c", name);
	printf("your age is %d", age);
	printf("finished time is %f", time);

}