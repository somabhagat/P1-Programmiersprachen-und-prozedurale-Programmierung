// ML_01_05_02_performant

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    char c;
    int i;
    int auswahl;
    int zaehler=0;

	printf("Geben Sie bitte ein Zeichen ein:  ");
	fflush(stdin);
	scanf("%c",&c);
	printf("Geben Sie bitte eine Anzahl ein:  ");
	fflush(stdin);
	scanf("%d",&i);
	printf("\nW�hlen Sie bitte bzg. der Ausgabe-Form:\n");
	printf("(1) Auswahl nebeneinander\n");
	printf("(2) Auswahl �bereinander\n");
	printf("Ihre Auswahl: ");
	fflush(stdin);
	scanf("%d",&auswahl);

    printf("\n");
    if(auswahl==2)
    {
        while(zaehler<i)
        {
            printf("%c\n",c);
            zaehler=zaehler+1;
        }
    }
    else
    {
        while(zaehler<i)
        {
            printf("%c",c);
            zaehler=zaehler+1;
        }
    }

    printf("\n\n\n");
    system("pause");
}
