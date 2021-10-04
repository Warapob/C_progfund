#include<stdio.h>
char cl[2],nm[2][99];
int j=0;
int main(){
    for(int i=0;i<2;i++){
        scanf("%s %c",&nm[i][99],&cl[i]);
    }
    for(int i=0;i<2;i++){
        if(cl[i] = 'A'){
            for(int k=0;nm[i][k]!='\0';k++){
                printf("%s %c",nm[i][k],cl[i]);
                j++;    
            }
        }
    }
    if(j==0){
        printf("Red Laser Beam!!!");
    }
}