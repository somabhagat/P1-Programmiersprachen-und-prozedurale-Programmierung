#include <stdio.h>
#include <windows.h>


gesamtPreis(float einzelPreis,float rabatt,int stueckzahl)
{
    printf("Der Gesamtpreis beläuft sich auf %.2f €.",einzelPreis*stueckzahl*(100-rabatt)/100);
}

main()
{
    system("chcp.com 1252");
    system("cls");

    int stueckzahl;
    float einzelPreis,rabatt;

    printf("Geben Sie bitte den Einzelpreis ein: ");
    fflush(stdin);
    scanf("%f",&einzelPreis);

    printf("Geben Sie bitte den Rabatt ein: ");
    fflush(stdin);
    scanf("%f",&rabatt);

    printf("Geben Sie bitte die Stückzahl ein: ");
    fflush(stdin);
    scanf("%i",&stueckzahl);

    gesamtPreis(einzelPreis,rabatt,stueckzahl);

    printf("\n\n\n");
    system("pause");
}
