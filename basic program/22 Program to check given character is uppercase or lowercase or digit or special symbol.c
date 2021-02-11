#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a character to check whether,\n (it is uppercase or lowercase or digit or special symbol)=");
    ch=getche();

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\n\n Given character is uppercase letter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n\n Given character is lowercase letter.");
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("\n\n Given character is digit.");
    }
    else
    {
        printf("\n\n Given character is special symbol.");
    }
    printf("\n Thanks.....");

    getch();
    return 0;
}
