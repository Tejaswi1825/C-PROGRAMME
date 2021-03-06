#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Zcnt=0,dig=0;

    printf("\n Enter +ve integer number to count zeros in it:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        dig=Temp%10;

        if(dig==0)
        {
            Zcnt++;
        }
        Temp=Temp/10;
    }
    printf("\n Count of zeros in given number %d is=%d",No,Zcnt);
    getch();
    return 0;
}
