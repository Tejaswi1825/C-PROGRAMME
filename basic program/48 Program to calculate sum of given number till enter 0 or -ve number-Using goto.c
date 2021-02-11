#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0,Sum=0,Cnt=1;

    printf("\n Enter numbers to calculate their sum \n(will stop summation  after 0\-ve input)=>");

    Up:
       printf("\n\t Enter number %d=",Cnt);
       scanf("%d",&No);

        if(No<=0)
        {
            goto out;
        }
        Sum=Sum+No;
        Cnt++;

        goto Up;
    out:
    printf("\n Press any key to get summation of given numbers=>");
    getche();
    system("cls");

    printf("\n Summation of given numbers=%d",Sum);

    printf("\n\n Thanks");
    getch();
    return 0;
}
