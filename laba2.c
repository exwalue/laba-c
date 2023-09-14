#include <stdio.h>
#include <math.h>

int main(){
    double x;
    printf ("Enter x: ");
    scanf ("%lf",&x);
    double y = (pow(2,x)+pow(2,-x))/2;
    printf("y(x)=%lf\n",y);
    if (-1.0 <= y && y <= 2.0){
        double z = sqrt(2+y-pow(y,2));
        printf("z(y)=%lf\n",z);
    }else{ printf("y value is incorrect!\n");
    }
    return 0;
}
