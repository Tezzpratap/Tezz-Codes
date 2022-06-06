#include<stdio.h>
#include<conio.h>

int main()
{
    int r,h;
    float pi = 3.14;
    printf("Type height of cylinder to calclute its volume =",h);
    scanf("%d",&h);
    printf("Type radius of cylinder =",r);
    scanf("%d",&r);
    float volume=pi*r*h;
    printf(" volume of your cylinder %f",volume);
    return 0;
}