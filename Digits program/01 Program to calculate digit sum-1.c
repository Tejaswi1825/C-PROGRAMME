#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dsum=0,temp=0;
    printf("\n Enter +ve integer number to calculate its digits sum=");
    scanf("%d",&No);

    temp=No;

    if(No<0)
    {
        printf("Invalid number");return-1;
    }
    while(temp>0)
    {
        Dig=temp%10;
        dsum=dsum+Dig;
        temp=temp/10;
    }
    printf("\n Sum of digits in given number %d is=%d.",No,dsum);
    getch();
    return 0;
}
