#include<stdio.h>
char scn[20];
int a = 0;
int main() {
	scanf("%[^\n]s", &scn);
	for (int i = 0; scn[i] != '\0'; i++) {
		a++;
	}
	printf("|====================|\n|                    |\n|%10s          |\n|                    |\n|====================|", scn);
	

}