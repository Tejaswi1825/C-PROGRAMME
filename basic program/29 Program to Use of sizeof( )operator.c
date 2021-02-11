#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n Size for integer in this environment=%d.",sizeof(int));
    printf("\n Size for character in this environment=%d.",sizeof(char));
    printf("\n Size for short int in this environment=%d.",sizeof(short int));
    printf("\n Size for floatin this environment=%d.",sizeof(float));
    printf("\n Size for double in this environment=%d.",sizeof(double));
    getch();
    return 0;
}
