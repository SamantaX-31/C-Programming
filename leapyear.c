#include<stdio.h>
int main()
{
    float year;
    printf("Enter Your Year\n");
    scanf("%f",&year);

    if((year%4) || (year%400))
    {
        printf("Your Entered year is a leapyear\n");
    }    

    else
    {
        printf("Your Entered year is a leapyear\n")
    }
    return 0;  
}