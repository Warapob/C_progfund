#include<stdio.h>
int n[5],j=0;
int main(){
    for(int i = 0; i < 5; i++)
        scanf("%d",&n[i]);
    for(int i = 0; i < 5 ; i++){
        if(n[i] == 5 ){
            j++;
        }
    }
    if(j>=3){
        printf("HAHAHA!!!");
    }
    else{
        printf("...");
    }

}