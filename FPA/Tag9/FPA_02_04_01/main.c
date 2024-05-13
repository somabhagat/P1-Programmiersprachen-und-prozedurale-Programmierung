#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    system("chcp 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int a, b, c;

    printf("Jetzt kommt 3 Zahlen. \n\n\n");

    a=rand()%101-100;
    printf("Zahl 1: %d\n",a);

    b=rand()%101-100;
    printf("Zahl2: %d\n",b);

    c=rand()%101-100;
    printf("Zahl3: %d\n",c);

    int my_list[3]={a,b,c};
    int x=rand()%3;
    int v=my_list[x];
    printf("Eine dieser 3 Zahlen: %d\n\n\n",v);


    return 0;
}
