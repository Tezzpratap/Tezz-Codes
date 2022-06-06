#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, r;
    printf("Entre the value of a=\n");
    scanf("%lf", &a);


    printf("Entre the value of b=\n");
    scanf("%lf", &b);

    r = pow(a,b);

    printf("%.lf^%.lf=%2.lf",a,b,r);
    return 0;
}