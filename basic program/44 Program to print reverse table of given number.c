#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,cnt=0;

    printf("\n Enter a number to print its table=");
    scanf("%d",&num);

    for(cnt=10;cnt>=1;cnt--)
    {
        printf("\n\t %3d*%3d=%3d",num,cnt,(num*cnt));
    }
    getche();

    printf("\n\n Thanks");
    getch();
    return 0;
}
