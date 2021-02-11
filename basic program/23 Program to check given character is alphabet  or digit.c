#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a character to check whether,\n it is alphabet or digit=");
    ch=getche();

    if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
    {
        printf("\n\n Given character is alphabet.");
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
