#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int zufall(int a, int b)
{
    return rand()%(b-a+1)+a;
}

int main(void)
{
    srand(time(NULL));
    rand();

    system("chcp.com 1252");
    system("cls");

    int a=1,x;

    do
    {
        printf("a is %d \n",a);
        x=zufall(a,100);
        printf("x is %d \n\n",x);
        a=x;

    }
    while(x!=100);

    printf("\n\n\n");
    system("pause");

    return 0;
}
