#include<stdio.h>
#include<math.h>
int scn[10],bag = 1;
float total;
int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &scn[i]);
	}
	for (int j = 0; j < 10; j++) {
		total = total + scn[j];
		/*if ((total + scn[j + 1]) >= 100) {
			total = 0;
			bag++;
		}*/
	}
	//printf("%d", bag);
	total = ceil(total /100);
	printf("%.0f", total);

}