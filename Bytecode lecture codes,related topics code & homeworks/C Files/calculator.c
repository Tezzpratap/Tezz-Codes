#include<stdio.h>
#include<math.h>

int main()
{
    char c[50];
    int a,b,p,r,sub,add,multiply,divide,square,square_root,power,simple_intrest,principle,time,rate;
    printf("Hi tezz so what do you want to calculate? \n");
    printf(" Sub? \n Add? \n Multiply? \n divide? \n square_root \n square \n power \n even_odd \n Simple_intrest \n");
    scanf("%s", &c);
    scanf("%c",&sub,&add,&multiply,&divide,&square,&square_root,&power,&simple_intrest,&principle,&time,&rate);
    


    if(!strcmp(c, "sub"))
    {
        printf("Tezz type two numbers to get there subtraction:");
        scanf("%d %d",&a,&b);
        sub = a-b;
        printf("here this is the subtration of gthose no.s= %d-%d=%d",a,b,sub);
        
    }


    else  if(!strcmp(c, "add"))
	{
        printf("Tezz type two numbers to get there sum:");
        scanf("%d %d",&a,&b);
        add = a +b ;
        printf("here this is the addition of those no.s= %d + %d = %d",a,b,add);
    }


    else  if(!strcmp(c, "multiply"))
	{
        printf("Tezz type two numbers to get there product:");
        scanf("%d %d",&a,&b);
        multiply = a*b;
        printf("here this is the product of these no.s=%d*%d=%d",a,b,multiply);
    }


    else  if(!strcmp(c, "divide"))
	{
        printf("Tezz type two numbers to get there division:");
        scanf("%d %d",&a,&b);
        divide = a/b;
        printf("here this is the division of your no.s=%d/%d=%d",a,b,divide);
    }


    else if (!strcmp(c,"Square_root"))
    {
        printf("Tezz type the number to get its sq root: ");
        scanf("%d",&a);
        square_root = a^1%2;
        printf("Tezz type no. to get square root = %d^1/2",a,square_root);
    }

    else if (!strcmp(c,"square"))
    {
        // printf("Tezz type the number to get its sq: ");
        // scanf("%d",&a);
        // square_root = a^2;
        // printf("here this the square root of your no=%d^2=%d",a,square_root);
        int p=2;
        long long int val=1;
        printf("Tezz type value base and and its exponent");
        scanf("%d",&a);
        for (int i = 0; i < p; i++)
        {
            val =val*a;
        }
        printf("Tezz here is your value of %d to power %d is %lld",a,p,val);
        //return 0;
    }

    
    else if (!strcmp(c,"Power"))
    {
    //     printf("Tezz type first exponent then after its power to get power product:");
    //     scanf("%d %d",&a,&b);
    //     printf("Entre the value of a=\n");
    //     scanf("%lf", &a);
    //     printf("Entre the value of b=\n");
    //     scanf("%lf", &b);

    //    r = pow(a,b);

    //    printf("%.lf^%.lf=%2.lf",a,b,r);
    //    return 0
          int a,b;
          long long int val=1;
          printf("Tezz type value base and and its exponent");
          scanf("%d%d",&a,&b);
          for (int i = 0; i < b; i++)
        {
           val =val*a;
        }
           printf("Tezz here is your value of %d to power %d is %lld",a,b,val);
    }


    else if (!strcmp(c,"even_odd"))
    {
        printf("Tezz type the number to know wether it is even or odd: ");
        scanf("%d",&a);
    
        if (a %2 == 0)
        printf("Tezz this is an Even number.");
        else
        printf("Tezz this is an Odd number.");
    }


    else if (!strcmp(c,"Simple_intrest"))
    {
         printf("Tezz type values of principle balance, time and rate respectively.");
        scanf("%d %d %d",&a,&b,&r);
        scanf("%d%d%d",&principle,&time,&rate);
        simple_intrest=(principle*time*rate)%100;
        printf("Tezz here is your simple_intrest:%d",simple_intrest);
        return 0;
    }

    
    else
    printf("Tezz you had not provided me any input try again.");

}

