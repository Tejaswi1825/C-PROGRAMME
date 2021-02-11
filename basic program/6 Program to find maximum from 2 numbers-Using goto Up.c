#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0;
    Up:
    printf("\nEnter 2 integer number=");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    {
        printf("\n Both numbers are equal.");
        goto Up;
    }
    else if(num1>num2)
    {
        printf("\n Number %d is Maximum",num1);
    }
    else
    {
        printf("\n Number %d is Maximum",num2);
    }
    getch();
    return 0;
}
