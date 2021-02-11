#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a character to view corresponding message=");
    ch=getche();
    if(ch=='A'||ch=='a')
    {
        printf("\n Welcome");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("\n Good bye");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("\n Have a nice day");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("\n Good gay");
    }
    else
    {
        printf("\n No message for such a character... ");
    }
    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
