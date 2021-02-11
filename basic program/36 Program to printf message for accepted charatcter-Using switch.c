#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a character to view corresponding message=");
    ch=getche();

    switch(ch)
    {
    case'a':
    case'A':
            printf("\n Welcome");
            break;
    case'b':
    case'B':
            printf("\n Good bye");
            break;
    case'c':
    case'C':
            printf("\n Have a nice day");
            break;
    case'd':
    case'D':
            printf("\n Good day");
            break;
    default:
            printf("\n No message for such character...");
            break;
    }
    printf("\n Thanks....");
    getch();
    return 0;
}
