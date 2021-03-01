#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5]={};

    printf("\n Value of 101 element=%d.",arr[0]);
    printf("\n Value of 102 element=%d.",arr[1]);
    printf("\n Value of 103 element=%d.",arr[2]);
    printf("\n Value of 104 element=%d.",arr[3]);
    printf("\n Value of 105 element=%d.",arr[4]);

    getch();

    system("cls");

    printf("\n Enter array elements=>\n\n");

    printf("\n Enter element[0]=");
    scanf("%d",&arr[0]);
    printf("\n Enter element[1]=");
    scanf("%d",&arr[1]);
    printf("\n Enter element[2]=");
    scanf("%d",&arr[2]);
    printf("\n Enter element[3]=");
    scanf("%d",&arr[3]);
    printf("\n Enter element[4]=");
    scanf("%d",&arr[4]);

    printf("\n Value of 201 element=%d.",arr[0]);
    printf("\n Value of 202 element=%d.",arr[1]);
    printf("\n Value of 203 element=%d.",arr[2]);
    printf("\n Value of 204 element=%d.",arr[3]);
    printf("\n Value of 205 element=%d.",arr[4]);

    printf("\n\n Press any key to continue...");

    getch();
    return 0;
}




