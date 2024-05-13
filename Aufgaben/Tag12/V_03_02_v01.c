#include <stdio.h>
#include <windows.h>

int sucheMin(int parameter1, int parameter2)
{
    if (parameter1 <= parameter2)
    {
        return parameter1;          // Datentyp siehe Beginn Zeile 4
    } else
    {
        return parameter2;          // Datentyp siehe Beginn Zeile 4
    }
}

/* 
    int                     sucheMin                (int parameter1, int parameter2)
    <rückgabeDatentyp>      <funktionsName>         <parameterListe>
    der <rückgabeDatentyp> gibt an, von welchem Datentyp der Wert ist, der von der Funktion an das
    Hauptprogramm zurückgegeben wird. Diese Angabe wird benötigt, damit der call by value Mechanismus funktioniert.
    HINWEIS: gibt die Funktion keinen Wert zurück, muss an der Stelle void angegeben werden.
*/

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");
    
    int x, y, min;

    printf("Geben Sie die erste Zahl ein: ");
    fflush(stdin);
    scanf("%d", &x);

    printf("Geben Sie die zweite Zahl ein: ");
    fflush(stdin);
    scanf("%d", &y);

    min = sucheMin(x, y);

    printf("Das Minimum aus %d und %d ist %d.\n", x, y, min);

    printf("\n\n");
    return 0;          // Datentyp siehe Beginn Zeile 23 ---> die 0 als int-Wert wird an das OS zurückgegeben
}