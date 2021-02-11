#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;

    printf("\n Enter integer number=");
    scanf("%d",&no);

    (no==0)?printf("\n Given number is Neutral."):((no%2==0)?printf("\n Given number is Even."):printf("\n Given number is Odd."));

    printf("\n Thanks!!!");

    getch();
    return 0;
}
