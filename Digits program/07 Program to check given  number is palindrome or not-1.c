#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Revno=0;

    printf("\n Enter +ve integer number to check whether it is palindrome number:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid number");goto DWN;
    }
    while(Temp>0)
    {
        Revno=(Revno*10)+(Temp%10);
        Temp/=10;
    }
    if(No==Revno)
    {
        printf("\n Given number %d is palindrome.",No);
    }
    else
    {
        printf(" Given number %d is not palindrome.",No);
    }
    DWN:
    getch();
    return 0;
}
