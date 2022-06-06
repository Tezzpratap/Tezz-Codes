#include<stdio.h>

int main()
{
    char c[50];

    printf("Hi Tezz pratap,\n i am Tesla your Al operated self driving car.\n i will take you where you want to go \n");
    printf("so where you want to go now?\n College \n Hostel \n Mahendragrah?\n");
    scanf("%s", &c);
    if(!strcmp(c, "college"))
    {
        printf("Ok Tezz we are going to College");
    }
    else  if(!strcmp(c, "hostel"))
	{
        printf("Ok Tezz we are going to hostel you will we tired");
    }
    
    else  if(!strcmp(c, "mahendragrah"))
	{
        printf("Ok Tezz we are going to Mahendragrh i think you need some stuffs");
    }

    else  if(!strcmp(c, "Mahendragrah railway station"))
	{
        printf("railway station! why Tezz? are you going some where? any work?");
    }

    else  if(!strcmp(c, "Mahendragrah bus stand"))
	{
        printf("Bus stand! but why Tezz? you want to go some where? any work?");
    }

    else  if(!strcmp(c, "delhi"))
	{
        printf("Delhi! any work? its very far Tezz it will take 3-4 hrs ");
    }

    // else  if(!strcmp(c, ""))
	// {
    //     printf("");
    // }
    // if you want to new places to go and the words to be told by esla then write it here.

    else 
    {
    printf("OOPS Tezz Its a new place sorry i cant go there i am not calibrated to go there.");
    }
    return 0;
}




