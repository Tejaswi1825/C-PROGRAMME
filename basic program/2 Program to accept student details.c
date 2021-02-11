#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade='A';
    int R_no=0;
    float Per=0.0;
    char Nm[80]="";
    printf("\n\t Enter Student Details=>");

    printf("\n\t Enter student Roll Number=");
    scanf("%d",&R_no);

    printf("\n\t Enter student Percentage=");
    scanf("%f",&Per);

    printf("\n\t Enter student Name=");
    scanf("%s",&Nm);

    printf("\n\t Enter student Grade=");
    scanf(" %c",&Grade);

    system("cls");

    printf("\n\t Student Information");
    printf("\n============**********=============\n");
    printf("\n\tRoll Number=%d.\n\tName       =%s.\n\tPercentage =%0.2f.\n\tGrade      =%c.",R_no,Nm,Per,Grade);
    printf("\n============***********=============\n");

    getch();
    return 0;
}

