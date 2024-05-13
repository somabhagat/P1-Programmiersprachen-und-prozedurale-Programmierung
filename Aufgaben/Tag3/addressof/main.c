#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    /*
     * Mit dem Operator & (address of) beziehen wir uns die Adresse im Speicher (RAM)
     * an der eine Variable hinterlegt ist.
     *
     * Mit den Formatspezifizierern %x bzw. %X können wir uns eine Zahl in ihrer
     * Hexadezimaldarstellung anzeigen/ausgeben lassen.
     */
    printf("Der Wert von a ist: %d, a ist an der Speicheradresse: %x hinterlegt.",
           a, &a);

    return 0;
}
