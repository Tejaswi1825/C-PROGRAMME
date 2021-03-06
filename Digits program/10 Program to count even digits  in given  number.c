#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,Temp=0,ECnt=0,Dig=0;

    printf("\n Enter +ve integer number to count even digits in it:");
    scanf("%d",&Num);

    Temp=Num;

    if(Num<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;

        if(Dig%2==0)
        {
            ECnt++;
        }
        Temp=Temp/10;
    }
    printf("\n Count of even digits in given number %d is=%d",Num,ECnt);
    getch();
    return 0;
}
