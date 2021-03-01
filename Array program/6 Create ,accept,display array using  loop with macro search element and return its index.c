#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int Arr[Size]={},i=0,Src_ele=0,eCnt=0;

    printf("\n Enter Array elements=>\n\n");

    for(i=0;i<Size;i++)
    {
        printf("\n Enter element[%d]=",i+101);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\n Value of no %d=%d.",i+401,Arr[i]);
    }
    printf("\n\n Press any key to continue...");
    getch();

    system("cls");

    printf("\n Enter element to search in Array=>");
    scanf("%d",&Src_ele);

    for(i=0;i<Size;i++)
    {
        if(Arr[i]==Src_ele)
        {
            break;
        }
    }
    if(i<Size)
    {
        printf("\n\n Given number %d found at index %d in given array.",Src_ele,i);
    }
    else
    {
        printf("\n Given number %d not found in given Array. ",Src_ele);
    }
    printf("\n\n Thanks!!!");

    getch();
    return 0;
}




