#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,Temp=0,OCnt=0,ECnt=0,ZCnt=0,dig=0;

    printf("\n Enter +ve integer number to count even,odd & zero digits in it:");
    scanf("%d",&Num);

    Temp=Num;

    if(Num<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        dig=Temp%10;

        if(dig==0)
        {
            ZCnt++;
        }
        else if(dig%2==0)
        {
            ECnt++;
        }
        else
        {
            OCnt++;
        }

        Temp=Temp/10;
    }

    printf("\n Count of zero  digits in given number %d is=%d",Num,ZCnt);
    printf("\n Count of even  digits in given number %d is=%d",Num,ECnt);
    printf("\n Count of odd  digits in given number %d is=%d",Num,OCnt);
    getch();
    return 0;
}
