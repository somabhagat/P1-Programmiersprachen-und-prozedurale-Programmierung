#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tag,monat,jahr; // Mehrere Variablen vom selben Typ k�nnen durch Komma getrennt in einer Zeile deklariert und definiert werden (auch Initialisierung pro Variable m�glich)

	printf("Geben Sie bitte den Tag ein: ");
	fflush(stdin);
	scanf("%d", &tag);

	printf("Geben Sie bitte den Monat ein: ");
	fflush(stdin);
	scanf("%d", &monat);

	printf("Geben Sie bitte das Jahr ein: ");
	fflush(stdin);
	scanf("%d", &jahr);

	printf("\n\tDeutsche Datumsdarstellung: ......... %.2d.%.2d.%.4d\n", tag, monat, jahr);
	printf("\tAmerikanische Datumsdarstellung: .... %.4d-%.2d-%.2d\n\n\n", jahr, monat, tag);

    return 0;
}
