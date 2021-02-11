#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;

    printf("\n ASCII table=>\n");

    for(no=0;no<128;no++)
    {
        printf("\n \t\t%3d=%c",no,no);
    }
    printf("\n Thanks for using our service....");

    getch();
    return 0;
}
