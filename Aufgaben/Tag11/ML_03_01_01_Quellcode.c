#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

schreibeZufallszahl(int min, int max)
{
    int x;
    x=rand()%(max-min+1)+min;
    printf("%d",x);
}

main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int min,max;

    printf("Geben Sie bitte die minimale Zahl ein, die ausgelost werden soll: ");
    fflush(stdin);
    scanf("%d",&min);

    printf("Geben Sie bitte die maximale Zahl ein, die ausgelost werden soll: ");
    fflush(stdin);
    scanf("%d",&min);

    schreibeZufallszahl(min,max);

    printf("\n\n\n");
    system("pause");
}
