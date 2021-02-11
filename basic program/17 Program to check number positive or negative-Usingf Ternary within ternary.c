#include<stdio.h>
#include<conio.h>

int main()
{
    int nm=0;

    printf("\n Enter an integer number=");
    scanf("%d",&nm);

    (nm==0)?printf("\n Given number is neutral."):((nm>0)?printf("\n Given number is positive."):printf("\n Given number is negative."));

    printf("\n\nThanks..");

    getch();
    return 0;
}
