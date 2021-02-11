#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=1,no2=0,no3=0,cnt=0;

    printf("\n Enter count for Fibonacci series=");
    scanf("%d",&cnt);

    printf("\n Fibonacci series of given count=");

    for(no1=1;cnt>0;cnt--)
    {
        printf("\t %d",no3);

        no3=no1+no2;
        no1=no2;
        no2=no3;
    }
    getch();
    return 0;
}
