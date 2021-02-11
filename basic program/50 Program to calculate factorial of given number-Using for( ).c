#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Fact=0,Temp=0;

    printf("\n Enter number to calculate its factorial= ");
    scanf("%d",&No);

    for(Fact=1,Temp=No;Temp>0;Temp--)
    {
        Fact*=Temp;
    }
    printf("\n Factorial of number %d is=%d",No,Fact);
    printf("\n Thanks...");
    getch();
    return 0;
}
