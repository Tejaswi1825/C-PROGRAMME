#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int arr[Size]={},i=0,S_ele=0,E_cnt=0;

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

    printf("\n Enter element to search in given array=>");
    scanf("%d",&S_ele);

    for(i=0;i<Size;i++)
    {
        if(arr[i]==S_ele)
        {
            E_cnt++;
        }
    }
    printf("\n\n Count of element %d in given array is=%d.",S_ele,E_cnt);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}




