#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int Arr[Size]={},i=0,Max1=0,Max2=0;

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

    Max1=Arr[0];
    for(i=0;i<Size;i++)
    {
       if(Arr[i]>Max1)
       {
           Max1=Arr[i];
       }
    }
    Max2=Arr[0];
    for(i=0;i<Size;i++)
    {
        if(Arr[i]>Max2 && Arr[i]< Max1)
        {
            Max2=Arr[i];
        }
    }
    printf("\n maximum of elements in given array is=%d.",Max1);
    printf("\n maximum of second element in given array is=%d.",Max2);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}




