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

    int x,y;
    int unten=1, oben=100;
    printf("Unterer Startwert:  1\nOberer Startwert: 100\nEs werden neue Werte zwischen 1 und 100 ausgelost\n\n");

    do
    {
        x=rand()%(oben-unten+1)+unten;
        y=rand()%(oben-unten+1)+unten;
        if(x<=y)
        {
            unten=x;
            oben=y;
        }
        else
        {
            unten=y;
            oben=x;
        }
        printf("Neuer Unterer Wert: %d\nNeuer Oberer Wert: %d\n",unten,oben);
        if(unten!=oben)printf("Es werden neue Werte zwischen %d und %d ausgelost\n\n",unten,oben);
    }
    while(unten!=oben);

    printf("\nUntere und obere Grenze ist identisch -> Das Programm endet, Auf Wiedersehen!\n\n\n");
    system("pause");
}