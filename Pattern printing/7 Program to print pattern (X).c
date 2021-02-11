#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;

    printf("\n Enter column value for print X pattern=");
    scanf("%d",&c);

    printf("\n______________Pattern_______________\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==j||i+j==c+1)
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
    printf("\n_____________Pattern_______________\n");

    getch();
    return 0;
}
