#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,Temp=0,OCnt=0,dig=0;

    printf("\n Enter +ve integer number to count odd digits in it:");
    scanf("%d",&Num);

    Temp=Num;

    if(Num<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        dig=Temp%10;

        if(dig%2==1)
        {
            OCnt++;
        }
        Temp=Temp/10;
    }
    printf("\n Count of odd  digits in given number %d is=%d",Num,OCnt);
    getch();
    return 0;
}
