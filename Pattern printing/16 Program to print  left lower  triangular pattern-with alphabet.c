#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch='A';

    printf("\n--------------------Pattern-----------------------\n\n");

    printf("\n Enter a value for print left lower triangular pattern:");
    scanf("%d",&c);

    printf("\n--------------------Pattern-----------------------\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        ch++;
    }
    printf("\n--------------------------------------------------\n");

    getch();
    return 0;
}
