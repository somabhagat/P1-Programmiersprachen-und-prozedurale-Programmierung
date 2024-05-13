#include <stdio.h>
#include <windows.h>

// das ist die Funktion
void begruessung(void)          // das ist der Funktionskopf
{                               // hier beginnt der Funktionsrumpf
    printf("Hallo zusammen\n");
    return;                     // R�ckkehr zum Hauptprogramm ohne R�ckgabewert
}

/*
void                        begruessung             (void)
<datentyp_r�ckgabewert>     <name_der_Funktion>     <parameterListe>

wenn die Parameterliste leer ist, kann dort das Schl�sselwort void geschrieben werden
*/

// das ist Hauptprogramm
int main(void)                  // Start des Hauptprogramms
{
    SetConsoleOutputCP(1252);   // Einstellen der codepage f�r Bildschirmausgabe
    SetConsoleCP(1252);         // Einstellen der codepage f�r Tastatureingabe
    system("cls");              // Bildschirm l�schen mit OS-Funktion
    
    printf("Gleich wird eine Funktion aufgerufen: \n");
    begruessung();              // Aufruf der Funktion; die Klammern werden IMMER geschrieben
    printf("Nun sind wir wieder im Hauptprogramm\n");


    printf("\n\n");             // 'Kosmetik'
    return 0;                   // R�ckkehr zur Aufrufstelle des Programms
}

/*
    zum Aufruf des Hauptprogramms

    int                         main                    (void)
    <datentyp_r�ckgabewert>     <name_der_Funktion>     <parameterListe>

    - der Name des Hauptprogramms MUSS IMMER main sein
    - wenn dem Programm Parameter �bergeben werden sollen, muss das in die Parameterliste eingetragen werden
    - das int bezieht sich auf den R�ckgabewert 0, der nach dem return in der letzten Zeile steht

*/