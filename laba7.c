#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[n][m])
{
    int i,j;
    for (j = 0; j < n; j++){
        for (i = 0; i < m; i++)
            printf ("%5d", a[j][i] = rand () % 151-50);
            
        printf("\n");
    }
}

double uslovie(int n,int m, int a[n][m]){
    int i,j;
    double sum,sum2,chast;
    for (i = 0; i < n ;i++){
        for (j = 0;j < m;j++){
            if (i==j){
                sum=sum+a[i][j];
            }
        }
    }
     for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
                sum2=sum2 + a[i][j]*a[j][i];
            }
    }
    chast=sum/sum2;
    return chast;
}

int main()
{
    srand(time(NULL));
    int n,m;
    printf("lines and columns -> ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    fill(n,m,a);
    printf("  %lf", uslovie(n,m,a));
    return 0;
}