#include<stdio.h>
#include<math.h>
int main()
{
    int d1,m1,y1,PD;
    int d2,m2,y2,BD;
    int D,M,Y;


    printf("Enter Your Date of Birth(DD/MM/YYYY)\n");
    scanf("%d/%d/%d", &d2,&m2,&y2);
    
    printf("Enter Current Date(DD/MM/YYYY)\n");
    scanf("%d/%d/%d", &d1,&m1,&y1);

    
    if((d1>=d2 && m1>=m2) || d1>d2 || m1>m2)
    {
        D=d1-d2;
        M=m1-m2;
        Y=y1-y2;
    }

    else if((d1<=d2 && m1<=m2) || d1<d2 || m1<m2)
    {
        D=(30+d1)-d2;
        M=(11+m1)-m2;
        Y=(y1-1)-y2;
    }

    printf("Your Age is %d years %d months %d days",Y,M,D);
    
    return 0;  
}