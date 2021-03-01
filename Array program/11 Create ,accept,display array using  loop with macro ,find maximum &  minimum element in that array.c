#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 9

int main()
{
    int Arr[Size]={},i=0,min=0,max=0,E_Cnt=0;

    printf("\n Enter Array elements=>\n\n");

    for(i=0;i<Size;i++)
    {
        printf("\n Enter element[%d]=",i+101);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\n Value of no %d=%d.",i+501,Arr[i]);
    }

    printf("\n\n Press any key to continue...");
    getch();

    system("cls");

    for(i=0;i<Size;i++)
    {
        if(E_Cnt==i)
        {
            min=Arr[i];
            max=Arr[i];
            continue;
        }
        if(Arr[i]<min)
        {
            min=Arr[i];
        }
        if(Arr[i]>max)
        {
            max=Arr[i];
        }
    }
    printf("\n Minimum element of given array is=%d.",min);
    printf("\n\n Maximum element of given array is=%d.",max);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}




