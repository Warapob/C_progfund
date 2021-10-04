#include<stdio.h>
#include<string.h>
int i, count;
char scn[99];
int main() {
	scanf("%s", &scn);
    for (i = 0; scn[i]; i++)
    {
            count++;
    }
    if (count == 3) {
        
        printf("*****\n*%s*\n*****", scn);
    }
    else {
        printf("Error");
    }
}