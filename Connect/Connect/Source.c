#include<stdio.h>
long  long int scn[5] ;
char s[999];
int main() {
	/*for (int k = 0; k <= 6; k++) {
		if (k <= 5)
			scanf("%lli", &scn[k]);
		else
			scanf("%s", &s);
	}*/
	scanf("%lli %lli %lli %lli %lli %s", &scn[0], &scn[1], &scn[2], &scn[3], &scn[4], &s);
	for (int i = 0; i < 5; i++) {
		if (i < 4)
			printf("%lli%s", scn[i], s);
		else if (i == 4)
			printf("%lli", scn[i]);
	}
}