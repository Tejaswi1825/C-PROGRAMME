#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dig=0,Temp=0,revno=0;

    printf("\n Enter +ve integer number to get  its reverse number:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid number");goto DWN;
    }
    while(Temp>0)
    {
        dig=Temp%10;
        revno=(revno*10)+dig;
        Temp=Temp/10;
    }
    printf("\n Reverse of given number %d is=%d.",No,revno);
    DWN:
    getch();
    return 0;
}
