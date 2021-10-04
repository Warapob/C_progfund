#include<stdio.h>
int h,w,j,i,k;
int main(){
    scanf("%d %d",&h,&w);
    if(w>=1&&h>=1){
        for(i=0;i<h;i++){
            if(i==0){
                printf(" ");
                for(j=0;j<w;j++){
                    printf("_");
                }
                printf("\n");
            }
            else if(i==h-1){
                printf("|");
                for(j=0;j<w;j++){
                    printf("_");
                }
                printf("|\n");
                break;
        }
            printf("|");
            for(k=0;k<w;k++){
                printf(" ");
            }
            printf("|\n");
        }
    }
    else{
        printf("error");
        
    }
    
}