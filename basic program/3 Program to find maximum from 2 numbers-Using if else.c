#include<stdio.h>
#include<conio.h>

int main()
{
    int Nm1,Nm2;

    printf("Enter 2 integer number=");
    scanf("%d%d",&Nm1,&Nm2);

    if(Nm1>Nm2)
    {
        printf("\n Number %d is Maximum",Nm1);
    }
    else
    {
        printf("\n Number %d is Maximum",Nm2);
    }
    getch();
    return 0;
}
