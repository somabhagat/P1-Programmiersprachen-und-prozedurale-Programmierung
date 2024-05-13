#include <stdio.h>
#include <windows.h>

void x_mal_mein_Zeichen(char p1, int anzahl)
{
    for (int i = 1; i <= anzahl; i++)  
    {
        printf("%c ", p1);
    }
    printf("\n");
    return;
}

/* 
    beim Funktionsaufruf müssen Anzahl, Reihenfolge und Datentypen mit der Definition der Funktion übereinstimmen.
 */

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    char b;
    int x;

    printf("Geben Sie bitte einen Buchstaben ein: ");
    fflush(stdin);
    scanf("%c", &b);    

    printf("Geben Sie bitte die Anzahl der Wiederholungen ein: ");
    fflush(stdin);
    scanf("%d", &x);    

    x_mal_mein_Zeichen(b, x);    // Funktionsaufruf mit 2 Parametern, die Inhalte von b und x werden an die Funktion übergeben

    printf("Feierabend\n");
    
    printf("\n\n");
    return 0;
}