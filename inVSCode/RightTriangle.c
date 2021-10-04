#include<stdio.h>
#include<math.h>
double a,b,c,d,e,f; //d^2=e^2+f^2
double changeNum(double a,double b,double c);
char triChecker(double d,double e,double f);
int main(){
    scanf("%lf %lf %lf",&a,&b,&c);
    changeNum(a,b,c);
    triChecker(d,e,f);
    
}
double changeNum(double a,double b,double c){
    if(a>b&&a>c){
        d = a;
        e = b;
        f = c;
        return d,e,f;
    }
    else if(b>a&&b>c){
        d = b;
        e = a;
        f = c;
        return d,e,f;
    }
    else if(c>a&&c>b){
        d = c;
        e = a;
        f = b;
        return d,e,f;
    }
    else if(a==c){
        if(a>b){
            d = a;
            e = b;
            f = c;
            return d,e,f;  
        }
        else if(a<b){
            d = b;
            e = a;
            f = c;
            return d,e,f;
        }
    }
    else if(a==b){
        if(a>c){
            d = a;
            e = b;
            f = c;
            return d,e,f;  
        }
        else if(a<c){
            d = c;
            e = a;
            f = b;
            return d,e,f;
        }
    }
    else if(c==b){
        if(c>a){
            d = c;
            e = a;
            f = b;
            return d,e,f;       
        }
        else if(c<a){
            d = a;
            e = b;
            f = c;
            return d,e,f;  
        }
    }      
}
char triChecker(double d,double e,double f){
    if(pow(d,2)==pow(e,2)+pow(f,2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
