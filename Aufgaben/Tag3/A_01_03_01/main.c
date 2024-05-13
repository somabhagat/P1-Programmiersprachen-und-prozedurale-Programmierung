#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variablen
    float breiteRechteck;
    float hoeheRechteck;
    float flaecheninhalt;

    // Eingaben
    printf("Bitte geben Sie die Breite des Rechtecks ein: ");
    scanf("%f", &breiteRechteck);
    fflush(stdin);

    printf("Bitte geben Sie die Hoehe des Rechtecks ein: ");
    scanf("%f", &hoeheRechteck);

    // Verarbeitung
    flaecheninhalt = breiteRechteck * hoeheRechteck;

    // Ausgabe
    printf("Das Rechteck hat einen Flaecheninhalt von: %f", flaecheninhalt);

    return 0;
}
