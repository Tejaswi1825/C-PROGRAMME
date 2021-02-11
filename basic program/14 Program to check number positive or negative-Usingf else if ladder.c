#include<stdio.h>
#include<conio.h>

int main()
{
    int nm=0;

    printf("\n Enter an integer number=");
    scanf("%d",&nm);

    if(nm==0)
    {
        printf("\n Given number is neutral.");
    }
    else if(nm>0)
    {
        printf("\n Given number is positive.");
    }
    else
    {
        printf("\n Given number is negative.");
    }
    printf("\n\n Please enter any key");

    getch();
    return 0;
}
