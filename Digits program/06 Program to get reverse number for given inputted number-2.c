#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,Temp=0,Revno=0;

    printf("\n Enter +ve integer number to get  its reverse number:");
    scanf("%d",&no);

    Temp=no;

    if(no<0)
    {
        printf("Invalid number");goto DWN;
    }
    while(Temp>0)
    {
        Revno=(Revno*10)+(Temp%10);
        Temp/=10;
    }
    printf("\n Reverse of given number %d is=%d.",no,Revno);
    DWN:
    getch();
    return 0;
}
