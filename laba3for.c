#include <stdio.h>
#include <math.h>

int main(){
    double x=0,f=0,h;
    scanf("%lf",&h);
    printf("      x             f(x)\n");
    printf("---------------------------\n");
    for (x;x<=1;x=x+h){
        f=cos(x)*pow(exp(x),(-x));
        printf("  %lf        %lf\n",x,f);
    }
    for(x;x<=2;x=x+h){
        f=log(x+1)-sqrt(4-pow(x,2));
        printf("  %lf        %lf\n",x,f);
    }
    return 0;
}