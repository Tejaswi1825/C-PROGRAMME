#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,temp=0,Revnum=0;

    printf("\n Enter +ve integer number to check whether it is palindrome number:");
    scanf("%d",&No);

    temp=No;

    if(No<0)
    {
        printf("Invalid number");goto DWN;
    }
    while(temp>0)
    {
        Revnum=(Revnum*10)+(temp%10);
        temp/=10;
    }
    if(No==Revnum)
    {
        printf("\n As %d==%d.",No,Revnum);
        printf("\n Given number %d is palindrome.",No);
    }
    else
    {
        printf("\n As %d!=%d.",No,Revnum);
        printf("\n Given number %d is not palindrome.",No);
    }
    DWN:
    getch();
    return 0;
}
