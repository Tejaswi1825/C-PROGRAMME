#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int Arr[Size]={},i=0,Min=0,Ele_cnt=0;

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
        if(Ele_cnt==i)
        {
            Min=Arr[i];
            continue;
        }
        if(Arr[i]<Min)
        {
            Min=Arr[i];
        }
    }
    printf("\n Minimum element of given array is=%d.",Min);

    printf("\n\n Thanks___!!!!");

    getch();
    return 0;
}




