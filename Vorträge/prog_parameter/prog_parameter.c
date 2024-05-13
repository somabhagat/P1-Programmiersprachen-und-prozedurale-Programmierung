/*
	�bergabe von Parametern an ein Programm in der Kommandozeile
	<name_des_progamms> <parameter1> <parameter2> ... <parametern>
*/

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// das ist die genauere Formulierung f�r die Funktion: int main(void)

// um einem Programm von der Kommandozeile aus Parameter �bergeben zu k�nnen, m�ssen
// zwei Parameter in der Funktion main() aufgef�hrt werden
// int argc --> argc steht f�r argument counter --> Anzahl der Argumente, die �bergeben wurden
// char*argv[] --> argv steht f�r argument values --> Array of Strings, der * steht f�r einen Zeiger

int main(int argc, char*argv[])		// argc und argv sind keine festen Schl�sselworte (nur Empfehlung)
{
	printf("--------------------------------------------------------------------------\n");
	printf("Ab hier kommen die Ausgaben des C-Programms\n");
	system("chcp 1252");
	// system("cls");

	printf("Anzahl der �bergebenen Parameter ist %d \n", argc);
	printf("Der Name des Programms ist %s \n", argv[0]);
	// der Index 0 in diesem array ist immer der Name des Programms, wie er auf der Kommandozeile eingegeben wurde

	printf("\n");
	for(int i=1; i<argc; i++)
	{
		printf("Die �bergebenen Werte sind: %s \n", argv[i]);
	}
	// alle Parameter, die auf der Kommandozeile �bergeben werden, sind (erstmal) Strings und
	// m�ssen ggf. f�r eine weitere Verarbeitung in andere Datentypen konvertiert werden

	// Beispiel: Addition von Werten
	float summe=0.;
	printf("\n");
	for(int i=1; i<argc; i++)
	{
		printf("Die �bergebenen Werte sind: %f \n", atof(argv[i]));
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