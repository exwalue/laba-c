#include <stdio.h>   // (a,b)=(0;2), a=0
#include <math.h>

double loga(double n);
int n=2;
double l1=0,l2=1,e=0.000001;

int main ()
{
    double sum=0;
    while (((l2-l1)/3)>e){
        l1=loga(n);
        l2=loga(2*n);
        n=2*n;
    } printf ("value int - %lf", l2);
    return 0;
}

double loga(double n)
{
    double h=0,sum=0,f=0,x=0;
    h=(float)2/n;
    for (int i=0;i<n;i++){
        x=(float)i*h+h/2;

        if (x>=0 && x<=1){
            f=cos(x)*pow(exp(x),(-x));
            sum=sum+f;
            
    }
        else if (x>1 && x<=2){
            f=log(x+1)-sqrt(4-pow(x,2));
            sum=sum+f;
            
    }
    } sum=sum*h;
    return (sum);

}

