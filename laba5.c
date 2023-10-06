#include <stdio.h>   
#include <math.h>

int rec(int i, int num), cycle(int b);

int main(){
    int n;
    printf("enter n - ");
    scanf("%d",&n);
    int a = cycle(n), b = rec(2,n);
    if (a == 0 && b==0){
        printf("Chislo ne prostoe - %d", n);
    } else if (a == 1 && b==1){
        printf("Prostoe  - %d", n);
    }
    return 0;
}
int cycle(int b){
    int i;
    for (i=2;i <= b/2; ++i){
        if (b % i == 0){
            return 0;
        }
    } return 1;
} 
int rec(int i,int num)
{
    if(num==i)
        return 1;
    else
        if(num%i==0)
            return 0;
    else{
        return rec(i+1,num);
    }
}