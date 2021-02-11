#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;

    printf("\n Enter integer number=");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n Given number is Even.");
    }
    else
    {
        printf("\n Given number is Odd");
    }
    printf("\n Thanks!!!");

    getch();
    return 0;
}
