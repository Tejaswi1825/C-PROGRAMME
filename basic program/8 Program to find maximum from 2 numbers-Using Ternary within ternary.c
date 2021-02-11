#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0;

    printf("\nEnter 2 integer number=");
    scanf("%d%d",&num1,&num2);

    (num1==num2)?printf("\n Both numbers are equal."):(num1>num2)?printf("\n Number %d is Maximum",num1):printf("\n Number %d is Maximum",num2);

    printf("\nThanks...");

    getch();
    return 0;
}
