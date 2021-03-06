#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,dsum=0,Temp=0;
    printf("\n Enter +ve integer number to calculate its digits sum=");
    scanf("%d",&no);

    Temp=no;

    if(no<0)
    {
        printf("Invalid number");return-1;
    }
    while(Temp>0)
    {
        dsum+=Temp%10;
        Temp/=10;
    }
    printf("\n Sum of digits in given number %d is=%d.",no,dsum);
    getch();
    return 0;
}
