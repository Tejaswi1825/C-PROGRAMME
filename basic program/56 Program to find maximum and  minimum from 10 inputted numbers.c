#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,min=0,max=0,Cnt=0;

    printf("\n Enter 10 numbers=>");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\t Enter number %d=",Cnt);
        scanf("%d",&no);

        if(Cnt==1)
        {
            min=no;
            max=no;
            continue;
        }
        if(no<min)
        {
            min=no;
        }
        if(no>max)
        {
            max=no;
        }
    }
    printf("\n Press any key to get maximum and minimum from given numbers->");
    getche();

    printf("\n Maximum of given numbers=%d",max);
    printf("\n Minimum of given number=%d",min);

    printf("\n\n Thanks");

    getch();
    return 0;
}
