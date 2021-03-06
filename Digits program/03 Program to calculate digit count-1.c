#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,dig=0,dCnt=0,Temp=0;
    printf("\n Enter +ve integer number to calculate its digits count:=");
    scanf("%d",&no);

    Temp=no;

    if(no<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        dig=Temp%10;
        dCnt++;
        Temp=Temp/10;
    }
    printf("\n Count of digits in given number %d is=%d.",no,dCnt);
    getch();
    return 0;
}
