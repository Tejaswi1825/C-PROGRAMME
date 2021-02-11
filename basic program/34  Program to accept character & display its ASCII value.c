#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;

    printf("\n ASCII to Character conversion=>\n\n");

    printf("\n Enter ASCII value to get its corresponding character=");
    scanf("%d",&no);
    printf("\n\n Character for given ASCII value %d is=|%C|.",no,no);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
