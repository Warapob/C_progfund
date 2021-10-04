#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    if(n>=1){
        for(int i = 'a';i<'a'+n;i++){
            if(i>=26+'a')
                printf("a");
            else
                printf("%c",i);
            
        }
    }
    else{
        printf("ERROR");
    }
}