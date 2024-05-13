#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grundGebuehr;
	float gefahreneKm;
	float preisProKm;
	float gesamtPreis;

	printf("Geben Sie bitte die Grundgebuehr ein: ");
	fflush(stdin);
	scanf("%f",&grundGebuehr);

	printf("Geben Sie bitte die Anzahl der gefahrenen Kilometer ein: ");
	fflush(stdin);
	scanf("%f",&gefahreneKm);

	printf("Geben Sie bitte den Preis pro Kilometer ein: ");
	fflush(stdin);
	scanf("%f",&preisProKm);

	gesamtPreis = grundGebuehr + gefahreneKm * preisProKm;

	printf("\n\tBei einer Grundgebuehr von %.2f Euro und einem Kilometerpreis von %.2f Euro,\n\tkostet eine %.2f km lange Taxifahrt insgesamt %.2f Euro.\n\n\n",
        grundGebuehr, preisProKm, gefahreneKm, gesamtPreis);

    return 0;
}
