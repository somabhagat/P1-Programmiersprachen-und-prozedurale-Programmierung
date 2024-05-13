#include <stdio.h>
#include <windows.h>

void meinLiebling(char p1)  // Parameterliste mit 1 Variablen wird definiert; p1 ist NUR in der Funktion gültig
{
    for (int i = 1; i <= 10; i++)   // Schleife für die Ausgabe des Werts
    {
        printf("%c ", p1);
    }
    printf("\n");
    return;
}

/*
    der Inhalt der Variablen b aus dem Hauptprogramm wird in die Variable p1 aus dem Funktionskopf kopiert
    diese Übergabe wird genannt: call by value
    bei der Definition der Funktion muss der Datentyp des Parameters mit dem Funktionsaufruf übereinstimmen, der Name des Parameters ist beliebig
*/

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    char b;     // diese Variable b ist NUR gültig im Hauptprogramm

    printf("Geben Sie bitte einen Buchstaben ein: ");
    fflush(stdin);
    scanf("%c", &b);    // Variable b erhält einen Wert

    meinLiebling(b);    // Funktionsaufruf mit 1 Parameter, der Inhalt von b wird an die Funktion übergeben

    printf("Feierabend\n");
    
    printf("\n\n");
    return 0;
}