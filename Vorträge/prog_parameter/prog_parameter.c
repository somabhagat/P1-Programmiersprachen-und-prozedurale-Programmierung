/*
	Übergabe von Parametern an ein Programm in der Kommandozeile
	<name_des_progamms> <parameter1> <parameter2> ... <parametern>
*/

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// das ist die genauere Formulierung für die Funktion: int main(void)

// um einem Programm von der Kommandozeile aus Parameter übergeben zu können, müssen
// zwei Parameter in der Funktion main() aufgeführt werden
// int argc --> argc steht für argument counter --> Anzahl der Argumente, die übergeben wurden
// char*argv[] --> argv steht für argument values --> Array of Strings, der * steht für einen Zeiger

int main(int argc, char*argv[])		// argc und argv sind keine festen Schlüsselworte (nur Empfehlung)
{
	printf("--------------------------------------------------------------------------\n");
	printf("Ab hier kommen die Ausgaben des C-Programms\n");
	system("chcp 1252");
	// system("cls");

	printf("Anzahl der übergebenen Parameter ist %d \n", argc);
	printf("Der Name des Programms ist %s \n", argv[0]);
	// der Index 0 in diesem array ist immer der Name des Programms, wie er auf der Kommandozeile eingegeben wurde

	printf("\n");
	for(int i=1; i<argc; i++)
	{
		printf("Die übergebenen Werte sind: %s \n", argv[i]);
	}
	// alle Parameter, die auf der Kommandozeile übergeben werden, sind (erstmal) Strings und
	// müssen ggf. für eine weitere Verarbeitung in andere Datentypen konvertiert werden

	// Beispiel: Addition von Werten
	float summe=0.;
	printf("\n");
	for(int i=1; i<argc; i++)
	{
		printf("Die übergebenen Werte sind: %f \n", atof(argv[i]));
		summe=summe+atof(argv[i]);
	}
	// atof --> Konvertiert einen String in einen float-Wert
	printf("Die Summe aller Argumente ist %f \n", summe);

	printf("Hier endet die Ausgabe des C-Programms\n");
	printf("--------------------------------------------------------------------------\n");

	// return summe;
	// return 0;

	if(summe>100)
    {
        return 0;
    } else
    {
        return summe;
    }
}