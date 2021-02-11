#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int num=0,sum=0,cnt=0;

    printf("\n Enter 10 numbers=");

    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n\t Enter number %d=",cnt);
        scanf("%d",&num);

        sum=sum+num;

    }
    printf("\n Press any key to get summation of given number=>");
    getche();
    system("cls");

    printf("\n Summation of given numbers=%d",sum);

    printf("\n\n Thanks");
    getch();
    return 0;
}
