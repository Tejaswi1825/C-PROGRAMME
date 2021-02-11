#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=0,no2=0,no3=0;

    printf("\n Enter 3 integer numbers=");
    scanf("%d%d%d",&no1,&no2,&no3);

    if(no1>no2 && no1>no3)
    {
        printf("\n Max is=%d",no1);
    }
    else if(no2>no1 && no2>no3)
    {
        printf("\n Max is=%d",no2);
    }
    else
    {
        printf("\n Max is=%d",no3);
    }
    getch();
    return 0;
}
