#include <stdio.h>   
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 401 - 200;
}

int max(int a[],int n){
    int max1=-201,max2=-201,max3=-201,i1=0,i2=0,i3=0,i,imax;
    for (i=0;i<n;i++){
        if (max1<a[i]){
            max1=a[i];
            i1=i;
        }
    }
    for (i=0;i<n;i++){
        if ((max2<a[i]) && (i != i1)){
            max2=a[i];
            i2=i;
        }
    }
    for (i=0;i<n;i++){
        if ((max3<a[i]) && (i != i1) && (i != i2)){
            max3=a[i];
            i3=i;
        }
    }
    imax=(i1+i2+i3)%n;
    a[imax]=max1*max2*max3-(max1+max2+max3);

return (a[imax]);

}
int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    printf("pri n = %d \nerunda ((*-+)) = %d   ",n,max(A,n));
    return 0;
}