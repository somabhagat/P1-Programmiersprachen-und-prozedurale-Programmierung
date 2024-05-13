#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z;

    printf("Bitte geben Sie eine beliebige Zahl ein: ");
    scanf("%d", &z);

    /* Version 1 */
    printf("Version 1:\n");
    if (z < 0) {
        printf("Die Zahl: %d ist negativ.\n", z);
    }

    if (z == 0) {
        printf("Die Zahl: %d ist gleich 0.\n", z);
    }

    if (z > 0) {
        printf("Die Zahl: %d ist groesser als 0.\n", z);
    }

    if (z > 10) {
        printf("Die Zahl: %d ist sogar groesser als 10.", z);
    }


    /* Version 2 */
    printf("\n\n\nVersion 2:\n");
    if (z < 0) {
        printf("Die Zahl: %d ist negativ.\n", z);
    } else if (z == 0) {
        printf("Die Zahl: %d ist gleich 0.\n", z);
    }  else if (z > 10) {
        printf("Die Zahl: %d ist groesser als 0.\n", z);
        printf("Die Zahl: %d ist sogar groesser als 10.", z);
    } else if (z > 0) {
        printf("Die Zahl: %d ist groesser als 0.\n", z);
    }


    /* Version 3 */
    printf("\n\n\nVersion 3:\n");
    if (z < 0) {
        printf("Die Zahl: %d ist negativ.\n", z);
    } else if (z == 0) {
        printf("Die Zahl: %d ist gleich 0.\n", z);
    }else if (z > 0) {
        printf("Die Zahl: %d ist groesser als 0.\n", z);

        if (z > 10) {
            printf("Die Zahl: %d ist sogar groesser als 10.", z);
        }
    }

    return 0;
}
