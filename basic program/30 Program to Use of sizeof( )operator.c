#include<stdio.h>
#include<conio.h>

int main()
{
    int num=20;
    char ch='A';
    printf("\n Size for integer variable num in this environment=%d.",sizeof(num));
    printf("\n Size for character variable ch in this environment=%d.",sizeof(ch));
    printf("\n=================*********************=======================");

    printf("\n Size for integer in this environment=%d.",sizeof(int));
    printf("\n Size for character in this environment=%d.",sizeof(char));
    printf("\n Size for short int in this environment=%d.",sizeof(short int));
    printf("\n Size for floatin this environment=%d.",sizeof(float));
    printf("\n Size for double in this environment=%d.",sizeof(double));

    printf("\n=================*********************=======================");

    getch();
    return 0;
}
