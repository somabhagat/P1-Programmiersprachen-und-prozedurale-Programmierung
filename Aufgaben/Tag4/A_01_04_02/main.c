#include <stdio.h>
#include <stdlib.h>

int main()
{
    float EinzelpreisProTicket, AnzahlPersonen, GesamtPreis;

    printf("Bitte geben Sie Einzeln Preis Pro Ticket ein: ");
    fflush(stdin);
    scanf("%f", &EinzelpreisProTicket);

    printf("Bitte geben Sie Personen Anzahl: ");
    fflush(stdin);
    scanf("%f", &AnzahlPersonen);

    if (AnzahlPersonen>4) {
        GesamtPreis=EinzelpreisProTicket*0.9*AnzahlPersonen;
    } else {
    GesamtPreis=EinzelpreisProTicket*AnzahlPersonen;
    }
    printf("Gesamt preis fuer den Kino Besuch ist: %.2f Euro. \n", GesamtPreis);
    return 0;
}
