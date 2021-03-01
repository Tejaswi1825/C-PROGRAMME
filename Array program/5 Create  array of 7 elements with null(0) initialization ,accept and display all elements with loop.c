#include<stdio.h>
#include<conio.h>

int main()
{
    int no[7]={0},eCnt=0;

    printf("\n Enter 7 elements=>\n");

    for(eCnt=0;eCnt<7;eCnt++)
    {
        printf("\n Enter element number%d=",eCnt+1);
        scanf("%d",&no[eCnt]);
    }
    printf("\n\n Press any key to continue...");

    getch();
    return 0;
}




