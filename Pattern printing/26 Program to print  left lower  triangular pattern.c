#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0,num=0,temp=0;

    printf("\n Enter a value for print left lower triangular pattern:");
    scanf("%d",&c);

    printf("\n Enter a number to get its table in pattern=");
    scanf("%d",&num);

    temp=num;

    printf("\n================Pattern=================\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                printf(" %-3d ",num);
                num=num+temp;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n=============================================\n");

    getch();
    return 0;
}
