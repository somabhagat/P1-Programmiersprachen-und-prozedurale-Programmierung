#include <stdio.h>
#include <windows.h>

float prozentsatz_berechnen(float g, float pw)
{
    float p;
    p = (pw/g) * 100;
    return p;
}

float prozentsatz_berechnen_v2(float g, float pw)
{
    return (pw/g) * 100;
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    float grundwert, prozentwert, prozentsatz;

    printf("Geben Sie den Grundwert ein: ");
    fflush(stdin);
    scanf("%f", &grundwert);

    printf("Geben Sie den Prozentwert ein: ");
    fflush(stdin);
    scanf("%f", &prozentwert);

    prozentsatz = prozentsatz_berechnen(grundwert, prozentwert);
    prozentsatz = prozentsatz_berechnen_v2(grundwert, prozentwert);

    printf("Der Prozentsatz ist: %f %%\n", prozentsatz);    // mit zusätzlicher Variable prozentsatz

    printf("Der Prozentsatz ist: %f %%\n", prozentsatz_berechnen_v2(grundwert, prozentwert));    // direkte Verwendung der Funktion
    
    printf("\n\n");
    return 0;
}