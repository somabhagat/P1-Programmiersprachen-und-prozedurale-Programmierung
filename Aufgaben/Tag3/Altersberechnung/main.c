#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aktJahr;
    int gebJahr;
    int alter;

    // Ausgabe zur Aufforderung der Einfabe des aktuellen Jahres.
    printf("Bitte geben Sie das aktuelle Jahr an: ");

    // Nutzereingabe des aktuellen Jahres. Wird in aktJahr abgespeichert.
    scanf("%d", &aktJahr);

    // Tastaturpuffer leeren
    fflush(stdin);

    // Ausgabe zur Aufforderung der Einfabe des Geburtsjahrs.
    printf("Bitte geben Sie Ihr Geburtsjahr an: ");

    // Nutzereingabe des Geburtsjahres. Wird in gebJahr abgespeichert.
    scanf("%d", &gebJahr);

    // Berechnung des Alters
    alter = aktJahr - gebJahr;

    // Ausgabe des Alters
    printf("In diesem Jahr sind oder werden Sie: %p Jahre alt.", &alter);

    // Sauberes Programmexit.
    return 0;
}
