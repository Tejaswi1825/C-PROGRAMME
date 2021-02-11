#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;
    Up:
    printf("\n Enter integer number=");
    scanf("%d",&no);

    if(no==0)
    {
        printf("\n Given number is Neutral.");
        goto Up;
    }
    (no%2==0)?printf("\n Given number is Even."):printf("\n Given number is Odd.");

    printf("\n Thanks!!!");

    getch();
    return 0;
}
