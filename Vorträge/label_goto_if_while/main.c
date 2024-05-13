#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    /* while-Loop mit if, label und goto */
    printf("while-Loop mit if, label und goto:\n");
    while_label:
    if (i <= 5) {
        printf("i: %d\n", i);
        i = i + 1;
        goto while_label;
    }

    /* while-Loop mit dem Schlüsselwort */
    printf("\n\nKlassischer while-Loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("j: %d\n", j);
        j = j + 1;
    }


    printf("\n\nAufgabe while-Loop mit x / 2:\n");
    int x = 20;
    x_label:
    if (x > 1) {
        x = x / 2;
        printf("x: %d\n", x);
        goto x_label;
    }


    printf("\nPause!\n");
    return 0;
}
