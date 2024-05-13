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

    float a=rand()%1000+(rand()%1000)/1000.0;


    printf("%.3f\n",a);

    return 0;
}
