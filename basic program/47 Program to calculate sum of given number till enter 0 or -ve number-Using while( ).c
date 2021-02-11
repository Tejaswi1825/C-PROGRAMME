#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int no=0,Sum=0,Cnt=1;

    printf("\n Enter numbers to calculate their sum \n(will stop summation  after 0\-ve input)=>");

    while(1)
    {
        printf("\n\t Enter number %d=",Cnt);
        scanf("%d",&no);

        if(no<=0)
        {
            break;
        }
        Sum=Sum+no;
        Cnt++;
    }
    printf("\n Press any key to get summation of given number=>");
    getche();
    system("cls");

    printf("\n Summation of given numbers=%d",Sum);

    printf("\n\n Thanks");
    getch();
    return 0;
}
