#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    float x=rand()%1000+(rand()%1000)/1000.0;

    printf("Es wird eine Kommazahl zwischen 0.000 und 999.999 ausgelost: %.3f",x);

    printf("\n\n\n");
    system("pause");
}
