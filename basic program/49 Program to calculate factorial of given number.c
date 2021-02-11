#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,Fact=1,Temp=0;

    printf("\n Enter number to calculate its factorial= ");
    scanf("%d",&no);

    Temp=no;

    while(Temp>0)
    {
        Fact=Fact*Temp;
        Temp--;
    }
    printf("\n Factorial of number %d is=%d",no,Fact);
    printf("\n Thanks...");
    getch();
    return 0;
}
