#include <stdio.h>
int main()
{
    printf("swapping the value of a and b\n");
    int a=9;
    int b=5;
    int temp;
    
    printf("a:%d, b:%d\n",a,b);
     
    temp=a;
    a=b;
    b=temp;
    printf("a:%d, b:%d",a,b);
    return 0;
}