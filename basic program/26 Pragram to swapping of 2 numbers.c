#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=0,no2=0,Temp=0;

    printf("\n Enter 2 numbers for Swapping=");
    scanf("%d%d",&no1,&no2);
    printf("\n==========**************============");
    printf("\n Before swap first number=%d.",no1);
    printf("\n Before swap second number=%d",no2);

    Temp=no1;
    no1=no2;
    no2=Temp;

    printf("\n=========****************=========");
    printf("\n After swap first number=%d.",no1);
    printf("\n After swap second number=%d",no2);
    printf("\n=========*****************========");

    printf("\n\nThanks....");

    getch();
    return 0;
}
