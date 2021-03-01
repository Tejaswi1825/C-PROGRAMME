#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int Arr[Size]={},i=0,ZCnt=0;

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
        if(Arr[i]==0)
        {
           ZCnt++;
        }
    }
    printf("\n Count of Zeros element in given array is=%d.",ZCnt);


    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}




