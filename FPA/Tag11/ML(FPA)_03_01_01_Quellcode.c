#include <stdio.h>
#include <windows.h>


adamRiese(float a, float b, char r)
{
    if(r=='a')
    {
        printf("      %f + %f = %f",a,b,a+b);
    }
    if(r=='s')
    {
        printf("      %f - %f = %f",a,b,a-b);
    }
    if(r=='m')
    {
        printf("      %f x %f = %f",a,b,a*b);
    }
    if(r=='d')
    {
        printf("      %f : %f = %f",a,b,a/b);
    }
}

main()
{
    system("chcp.com 1252");
    system("cls");

    char rechenart;
    float zahl1,zahl2;

    printf("*****************************************************\n");
    printf("******************* Hauptprogramm *******************\n");
    printf("*****************************************************\n\n");

    printf("Geben Sie bitte eine erste  Kommazahl ein: ");
    fflush(stdin);
    scanf("%f",&zahl1);

    printf("Geben Sie bitte eine zweite Kommazahl ein: ");
    fflush(stdin);
    scanf("%f",&zahl2);

    printf("\nW�hlen Sie bitte eine der folgenden Rechenarten:\n");
    printf(" Eingabe 'a', falls Sie    Addition    w�hlen wollen\n");
    printf(" Eingabe 's', falls Sie  Subtraktion   w�hlen wollen\n");
    printf(" Eingabe 'm', falls Sie Multiplikation w�hlen wollen\n");
    printf(" Eingabe 'd', falls Sie    Division    w�hlen wollen\n");
    printf("Eingabe > ");
    fflush(stdin);
    scanf("%c",&rechenart);

    printf("\n\n*****************************************************\n");
    printf("********************* Funktion **********************\n");
    printf("*****************************************************\n\n");
    adamRiese(zahl1,zahl2,rechenart);

    printf("\n\n*****************************************************\n");
    printf("************** Zur�ck im Hauptprogramm **************\n");
    printf("*****************************************************\n\n");
    printf("    Das war es f�r diese Aufgabe, tsch���� ...");


    printf("\n\n\n");
    system("pause");
}
