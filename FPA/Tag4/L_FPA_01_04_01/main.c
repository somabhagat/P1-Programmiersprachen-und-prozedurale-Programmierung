#include <stdio.h>

int main()
{
    int a, b;

    printf("Bitte geben Sie eine Zahl ein: ");      /* Ausgabe */
    fflush(stdin);                                  /* Tastaturpuffer leeren */
    scanf("%d", &a);                                /* Eingabe */

    printf("Geben Sie nun eine weitere Zahl ein: ");
    fflush(stdin);
    scanf("%d", &b);

    /* Prüfung auf die größere von beiden Zahlen */
    /* Version 1 */
    if (a >= b) {
        printf("Das Maximum der beiden Zahlen %d und %d ist %d (Version 1)\n",
               a, b, a);
    } else {
        printf("Das Maximum der beiden Zahlen %d und %d ist %d (Version 1)\n",
               a, b, b);
    }

    /* Version 2 */
    putchar('\n');
    if (a > b) {
        printf("Das Maximum der beiden Zahlen %d und %d ist %d (Version 2)\n",
               a, b, a);
    } else {
        printf("Das Maximum der beiden Zahlen %d und %d ist %d (Version 2)\n",
               a, b, b);
    }

    /* Version 3 - Mit dem ternary Operator */
    putchar('\n');      /* == printf("\n"); */
    int max;

    /*
     * Der ternary arbeitet vom Prinzip her wie ein if-else.
     * Der Prüfungsteil ist vor dem ?. Danach kommt der if-Block.
     * Nach dem : wiederum kommt der else-Teil.
     *
     * Hier wird nun in der Variablen max die Variable a zugewiesen
     * wenn gilt a >= b sonst wird max der Wert von b zugewiesen.
     */
    max = (a >= b) ? a : b;
    printf("Das Maximum der beiden Zahlen %d und %d ist %d (Version 3)\n",
                a, b, max);

    return 0;
}
