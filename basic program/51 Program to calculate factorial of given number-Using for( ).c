#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,Fact=0,Temp=0;

    printf("\n Enter number to calculate its factorial= ");
    scanf("%d",&Num);

    for(Fact=1,Temp=Num;Temp>0;Fact*=Temp,Temp--);

    printf("\n Factorial of number %d is=%d",Num,Fact);
    printf("\n Thanks...");
    getch();
    return 0;
}
