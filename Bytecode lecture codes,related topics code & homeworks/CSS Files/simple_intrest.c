#include<stdio.h>

int main()
{
    int simple_intrest,principle,time,rate;
    printf("Tezz type values of principle balance, time and rate respectively.");
    scanf("%d%d%d",&principle,&time,&rate);
    simple_intrest=(principle*time*rate)%100;
    printf("Tezz here is your simple_intrest:%d",simple_intrest);
    return 0;

}



