#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter Your Marks:");
    scanf("%d", &Marks);

    switch(Marks)
    {
        case 1:
        if(Marks <=90 || Marks>=100)
        { 
            printf("Your Grade is A\n");
            break;
        }

      /*  case 1:
        if(Marks <=90 || Marks>=100)
        printf("Your Grade is A\n");
        break;

        case 1:(Marks <=90 || Marks>=100)
        printf("Your Grade is A\n");
        break;

        case 2:(Marks <=80 || Marks>=90)
        printf("Your Grade is B\n");
        break;

        case 3:(Marks <=70 || Marks>=80)
        printf("Your Grade is C\n");
        break;

        case 4:(Marks <=60 || Marks>=70)
        printf("Your Grade is D\n");
        break;

        case 5:(Marks <=70)
        printf("Your Grade is F\n");
        break;

        default:
        printf("Invalid Grade\n");
        break;
    }
    */
}