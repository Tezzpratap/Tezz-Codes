#include<stdio.h>

int main()
{
    int number;
    printf("Tezz, tell me the word to know even or odd:");
    scanf("%d",&number);
    
    if (number %2 == 0)
        printf("Tezz this is an Even number.");
    else
        printf("Tezz this is an Odd number.");

    return 0;
}
