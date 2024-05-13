#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    float GesamtPunktZahl, ErrecihtePunktZahl,Prozent;


    printf("Geben Sie Gesamt Punkt Zahl: ");
    fflush(stdin);
    scanf("%d", &GesamtPunktZahl);

    printf("Geben Sie Errecihte Punkt Zahl: ");
    fflush(stdin);
    scanf("%d", &ErrecihtePunktZahl);

    Prozent=ErrecihtePunktZahl/GesamtPunktZahl*100;

    if (Prozent>49){


        printf("Sie haben %.0f Prozent erreicht und damit Bestanden",Prozent);
    } else{

    printf("Sie haben %.0f Prozent erreicht und damit Durchgefallen", Prozent);
    }

    return 0;
}
