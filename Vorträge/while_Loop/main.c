#include <stdio.h>

int main()
{
    int x;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &x);

    while (x > 1)           /* Kopf von while */
    {                       /* Ab hier beginnt in einem Block {} der Rumpf/Körper von while. */
        x = x / 2;
        printf("x hat den Wert: %d\n", x);
    }

    printf("Die while-Schleife wurde beendet.\n");

    return 0;
}
