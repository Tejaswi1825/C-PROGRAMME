#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int arr[Size]={},i=0,Max=0,E_cnt=0;

    printf("\n Enter Array elements=>\n\n");

    for(i=0;i<Size;i++)
    {
        printf("\n Enter element[%d]=",i+101);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\n Value of no %d=%d.",i+501,arr[i]);
    }

    printf("\n\n Press any key...");
    getch();

    system("cls");

    for(i=0;i<Size;i++)
    {
        if(E_cnt==i)
        {
            Max=arr[i];
            continue;
        }
        if(arr[i]>Max)
        {
            Max=arr[i];
        }
    }
    printf("\n Maximum element of given array is=%d.",Max);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}




