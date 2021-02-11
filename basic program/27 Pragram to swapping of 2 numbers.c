#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0,Temp=0;

    printf("\n Enter 2 numbers for Swapping=");
    scanf("%d%d",&num1,&num2);
    printf("\n  ____________**********____________");
    printf("\n Before swap first number=%d.",num1);
    printf("\n Before swap second number=%d",num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("\n____________****************___________");
    printf("\n After swap first number=%d.",num1);
    printf("\n After swap second number=%d",num2);
    printf("\n____________*****************___________");
    printf("\n\nThanks....");

    getch();
    return 0;
}
