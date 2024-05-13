#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Klassisches do-while:\n\n");

    do {
        printf("Hello world!\n");
        printf("\nWollen Sie nochmals die Ausgabe \"Hello world!\" sehen? (1 fuer ja): ");
        scanf("%d", &x);
        fflush(stdin);
    } while (x == 1);

    printf("Bye!\n");

}


/*
    // Kopfgesteuerte Variante:

    int x = 1;

    while (x == 1) {
        printf("Hello world!\n");
        printf("\nWollen Sie nochmals die Ausgabe \"Hello world!\" sehen? (1 fuer ja): ");
        scanf("%d", &x);
        fflush(stdin);
    }

    printf("Bye aus dem Kopfgesteuertem while!\n");

    return 0;
*/


