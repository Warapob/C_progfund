#include<stdio.h>
long int noOfBook;
double money, discount;
int main() {
	scanf("%li %lf", &noOfBook, &money);
	if (noOfBook > 4 && money > 600) {
		printf("Promotion: Yes");
		discount = money * 0.9;
	}
	else {
		printf("Promotion: No");
		discount = money;
	}
	printf("\nPrice: %.2lf baht", discount);
}