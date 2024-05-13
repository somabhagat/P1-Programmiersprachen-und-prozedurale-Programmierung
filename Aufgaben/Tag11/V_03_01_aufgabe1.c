#include <stdio.h>
#include <windows.h>

// das ist die Funktion
void begruessung(void)          // das ist der Funktionskopf
{                               // hier beginnt der Funktionsrumpf
    printf("Hallo zusammen\n");
    return;                     // Rückkehr zum Hauptprogramm ohne Rückgabewert
}

/*
void                        begruessung             (void)
<datentyp_rückgabewert>     <name_der_Funktion>     <parameterListe>

wenn die Parameterliste leer ist, kann dort das Schlüsselwort void geschrieben werden
*/

// das ist Hauptprogramm
int main(void)                  // Start des Hauptprogramms
{
    SetConsoleOutputCP(1252);   // Einstellen der codepage für Bildschirmausgabe
    SetConsoleCP(1252);         // Einstellen der codepage für Tastatureingabe
    system("cls");              // Bildschirm löschen mit OS-Funktion
    
    printf("Gleich wird eine Funktion aufgerufen: \n");
    begruessung();              // Aufruf der Funktion; die Klammern werden IMMER geschrieben
    printf("Nun sind wir wieder im Hauptprogramm\n");


    printf("\n\n");             // 'Kosmetik'
    return 0;                   // Rückkehr zur Aufrufstelle des Programms
}

/*
    zum Aufruf des Hauptprogramms

    int                         main                    (void)
    <datentyp_rückgabewert>     <name_der_Funktion>     <parameterListe>

    - der Name des Hauptprogramms MUSS IMMER main sein
    - wenn dem Programm Parameter übergeben werden sollen, muss das in die Parameterliste eingetragen werden
    - das int bezieht sich auf den Rückgabewert 0, der nach dem return in der letzten Zeile steht

*/