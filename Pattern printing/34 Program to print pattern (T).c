#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;

    printf("\n Enter column value for print T pattern=");
    scanf("%d",&c);

    printf("\n*************Pattern**************\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||j==(c+1)/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n************************************\n");
    getch();
    return 0;
}
