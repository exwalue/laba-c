#include <stdio.h>
#include <math.h>

int main(){
    double x=0,f=0,h;
    scanf("%lf",&h);
    printf("      x             f(x)\n");
    printf("---------------------------\n");
    while (x>=0, x<=1){
        f=cos(x)*pow(exp(x),(-x));
        printf("  %lf        %lf\n",x,f);
        x=x+h;
    }
    while(x>1,x<=2){
        f=log(x+1)-sqrt(4-pow(x,2));
        printf("  %lf        %lf\n",x,f);
        x=x+h;
    }
    return 0;
}