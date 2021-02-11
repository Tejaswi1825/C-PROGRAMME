#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    Up:
    printf("\n Enter a number=");
    scanf("%d",&Num);

    if((Num%9==0)&&(Num%4==0))
    {
        printf("\n Number is divisible by both 9 & 4");
    }
    else if(Num%9==0)
    {
        printf("\n Number is only divisible by 9.");
    }
    else if(Num%4==0)
    {
        printf("\n Number is only divisible by 4");
    }
    else
    {
        printf("\n Number is not divisible by both 9 & 4.");
    }
    printf("\n Thanks!!!");
    goto Up;

    getch();
    return 0;
}
