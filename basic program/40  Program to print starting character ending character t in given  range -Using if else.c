#include<stdio.h>
#include<conio.h>

int main()
{
    char L_ch='\0',S_ch='\0',E_ch='\0';

    printf("\n Enter starting character=");
    S_ch=getche();

    printf("\n Enter ending character=");
    E_ch=getche();

    if(S_ch<E_ch)
    {
        for(L_ch=S_ch;L_ch<=E_ch;L_ch++)
        {
            printf("\n %c",L_ch);
        }
    }
    else
    {
        for(L_ch=S_ch;L_ch>=E_ch;L_ch--)
        {
            printf("\n %c",L_ch);
        }
    }
    printf("\n Thanks");
    getch();
    return 0;
}
