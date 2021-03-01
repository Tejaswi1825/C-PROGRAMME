#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int Arr[Size]={},i=0,Sum=0;

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
      Sum=Sum+Arr[i];
    }
    printf("\n Summation of all elements in given array is=%d.",Sum);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}




