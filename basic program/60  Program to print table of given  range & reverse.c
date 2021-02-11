#include<stdio.h>
#include<conio.h>

int main()
{
    int Rn=0,Cn=0,Sno=0,Eno=0;

    printf("\n Enter table range from & to=");
    scanf("%d%d",&Sno,&Eno);

    printf("\n Tables from %d to %d as follos=>\n\n",Sno,Eno);
    printf("\n===============***********===================\n");

    for(Rn=1;Rn<=10;Rn++)
    {
        if(Sno<Eno)
        {
            for(Cn=Sno;Cn<=Eno;Cn++)
            {
            printf(" %3d ",Cn*Rn);
            }
        }
        else
        {
           for(Cn=Sno;Cn>=Eno;Cn--)
            {
            printf(" %3d ",Cn*Rn);
            }
        }
        printf("\n");
    }
    printf("\n===============***********===================\n");
    getche();

    printf("\n\n Thanks");

    getch();
    return 0;
}
