#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,Cnt=0;

    printf("\n Enter a number to print its table=");
    scanf("%d",&no);

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\t %3d*%3d=%3d",no,Cnt,(no*Cnt));
    }
    getche();

    printf("\n\n Thanks");
    getch();
    return 0;
}
