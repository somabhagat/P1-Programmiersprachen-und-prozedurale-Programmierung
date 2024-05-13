#include <stdio.h>

int main()
{
    float startKapital, zielKapital, zinsSatz, aktuellesKapital;
    int jahr;

    printf("Bitte geben Sie das Startkapital ein: ");
    fflush(stdin);
    scanf("%f", &startKapital);

    printf("Bitte geben Sie das Zielkapital ein: ");
    fflush(stdin);
    scanf("%f", &zielKapital);

    printf("Bitte geben Sie den Zinssatz ein: ");
    fflush(stdin);
    scanf("%f", &zinsSatz);

    aktuellesKapital = startKapital;

    jahr = 0;

    while (aktuellesKapital < zielKapital)
    {
        aktuellesKapital = aktuellesKapital * (zinsSatz + 100) / 100;
        jahr++;
    }

    printf("Nach %d Jahren betraegt Ihr Kapital: %f\n", jahr, aktuellesKapital);

    return 0;
}
