#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    printf("***** while-Loop *****\n");
    while (i < 6) {
        printf("Der %d-te while-Loop\n", i);
        i++;
    }

    printf("\nDer Wert von i nach while ist: %d\n", i);

    putchar('\n');
    printf("***** for-Loops *****\n");
    int j;

    for (j = 1; j < 6; j++) {
        printf("Der %d-te for-Loop\n", j);
    }

    printf("\nDer Wert von j nach for ist: %d\n", j);


    /*
     * Defakto kann bei einem for-Loop jeder Bestandteil aus dem Kopf weggelassen werden.
     * Die zwei Semikolons sind dennoch - aus Gründen der Syntax - nötig.
     */

    /* Unendlicher Loop */
    /*
    for (;;)
        printf("I run 4ever.\n");
    */

    putchar('\n');
    /* Im dem folgenden for-Loop wird nur der Initialisierungsteil in eine eigene Anweisung ausgelagert. */
    j = 1;
    for (; j < 6; j++) {
        printf("Der %d-te for-Loop mit j aussen initalisiert.\n", j);
    }
    printf("Der Wert von j nach dem for-Loop mit j von aussen initialisiert: %d.", j);

    putchar('\n');
    /*
     * Im dem folgenden for-Loop wird nur die boolesche Bedinung, also der mittlere Teil, gesetzt.
     * Der "Rest" wird vor bzw. in for gesetzt.
     */
    j = 1;
    for (; j < 6;) {        /* <=> while (j < 6) {...} */
        printf("Der %d-te for-Loop mit Initialisierung aussen und hochzaehlen innen.\n", j);
        j++;
    }

    printf("Der Wert von j nach for ist: %d\n", j);

   /* while(1)    <=> for (;;) {...}
        printf("I run 4ever 2.\n"); */

    return 0;
}
