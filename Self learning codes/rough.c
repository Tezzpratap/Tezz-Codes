#include<stdio.h>
int main()
{
    int a;
    float p=.5;
    long long int val=1;
    printf("Tezz type value base and and its exponent");
    scanf("%d",&a);
    for (int i = 0; i < p; i++)
    {
        val =val*a;
    }
    printf("Tezz here is your value of %d to power %d is %lld",a,p,val);
    return 0;
    
}