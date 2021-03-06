#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,DCnt=0,Temp=0;
    printf("\n Enter +ve integer number to calculate its digits count:=");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        DCnt++;
        Temp/=10;
    }
    printf("\n Count of digits in given number %d is=%d.",No,DCnt);
    getch();
    return 0;
}
