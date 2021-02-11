#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=0,no2=0,no3=0;

    printf("\n Enter 3 integer numbers=");
    scanf("%d%d%d",&no1,&no2,&no3);

    if((no1==no2)&&(no2==no3))
    {
        printf("\n All 3 given numbers are equal!1!");
        goto DWN;
    }
    if(no1>no2)
    {
        if(no1>no3)
        {
            printf("\n Max is=%d",no1);
        }
        else
        {
            printf("\n Max is=%d",no3);
        }
    }
    else if(no2>no3)
    {
        printf("\n Max is=%d",no2);
    }
    else
    {
        printf("\n Max is=%d",no3);
    }
    DWN:
    printf("\n Thanks for interacting....");

    getch();
    return 0;
}
