#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration and initialisierung der float variable a.
    float a=1.2345;

    //Declaration and initialisierung der float variable b.
    float b=2.3456;

    //Declaration and initialisierung der float variable c.
    float c=3.4567;

    float summe=a+b+c;

    //Ausgabe einer summe mit der Funktion printf()
    printf("%.4f+%.4f+%.4f=%.4f", a, b, c, summe);
}
