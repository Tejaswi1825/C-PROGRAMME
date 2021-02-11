#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a character to check whether,\n it is uppercase or lowercase=");
    ch=getche();

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\n\n Given character is uppercase letter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n\n Given character is lowercase letter.");
    }
    else
    {
        printf("\n\n Given character is neither uppercase nor uppercase.");
    }
    printf("\n Thanks.....");

    getch();
    return 0;
}
