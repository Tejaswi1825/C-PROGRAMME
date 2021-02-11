#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    for(ch='M';ch>='H';ch--)
    {
        printf("\n %c",ch);
    }
    printf("\n Thanks");
    getch();
    return 0;
}
