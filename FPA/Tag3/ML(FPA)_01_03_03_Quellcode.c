// ML(FPA)_01_03_03

#include <stdio.h>

main()
{
	float gesamtStrecke;
	float etappe;
	float restStrecke;

	printf("Geben Sie bitte die Gesamtstrecke (in km) ein: ");
	fflush(stdin);
	scanf("%f",&gesamtStrecke);
    restStrecke=gesamtStrecke;
	printf("Zu Beginn ist das Ziel also noch rund %.2f km entfernt.",restStrecke);

	printf("\n\nGeben Sie bitte die Strecke der ersten Etappe ein: ");
	fflush(stdin);
	scanf("%f",&etappe);
    restStrecke=restStrecke-etappe;
	printf("Das Ziel ist nun noch rund %.2f km entfernt.",restStrecke);

	printf("\n\nGeben Sie bitte die Strecke der zweiten Etappe ein: ");
	fflush(stdin);
	scanf("%f",&etappe);
    restStrecke=restStrecke-etappe;
	printf("Das Ziel ist nun noch rund %.2f km entfernt.",restStrecke);

	printf("\n\nGeben Sie bitte die Strecke der dritten Etappe ein: ");
	fflush(stdin);
	scanf("%f",&etappe);
    restStrecke=restStrecke-etappe;
	printf("Das Ziel ist nun noch rund %.2f km entfernt.",restStrecke);

}
