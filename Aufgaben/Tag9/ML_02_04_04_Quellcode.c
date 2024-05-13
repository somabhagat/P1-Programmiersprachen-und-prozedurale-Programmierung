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

    int a,b,c;

    a=rand()%201-100; // identisch mit rand()%(100-(-100)+1)+(-100) 
    b=rand()%201-100;

    printf("Geben Sie bitte das Ergebnis von %d+%d ein: ",a,b);
    fflush(stdin);
    scanf("%d",&c);

    if(a+b==c)
    {
        printf("Glückwunsch");
    }
    else
    {
        printf("Fehler, korrekt Lösung: %d",a+b);
    }

    printf("\n\n\n");
    system("pause");
}
