#include<stdio.h>
int pt;
char u[4];
int main(){
    scanf("%d %c %c %c %c",&pt,&u[0],&u[1],&u[2],&u[3]);
    if(pt>=0&&pt<=30000){
        for(int i = 0; i < 4; i++){
            switch(u[i]){
                case 'D' : {
                    if(pt >= 28250) printf("D");
                    i = 4;
                    break;
                }
                case 'E' : {
                    if(pt >= 27000) printf("E");
                    i = 4;
                    break;
                }
                case 'F' : {
                    if(pt >= 25000) printf("F");
                    i = 4;
                    break;
                }
                case 'H' : {
                    if(pt >= 22000) printf("h");
                    i = 4;
                    break;
                }
                case 'G' : {
                    if(pt >= 21750) printf("G");
                    i = 4;
                    break;
                }
                case 'A' : {
                    if(pt >= 20000) printf("A");
                    i = 4;
                    break;
                }
                case 'C' : {
                    if(pt >= 18000) printf("C");
                    i = 4;
                    break;
                }
                case 'B' : {
                    if(pt >= 17500) printf("B");
                    i = 4;
                    break;
                }
            }

        }
    }
    else{
        printf("FISHER");
    }

}