#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    char Buchstabe1, Buchstabe2;
    int Wahl;


    printf("Geben Sie erste Buchstabe: ");
    fflush(stdin);
    scanf("%c", &Buchstabe1);

    printf("Geben Sie zweite Buchstabe: ");
    fflush(stdin);
    scanf("%c", &Buchstabe2);


    printf("Treffen Sie ein Auswahl 1 oder 2: ");
    fflush(stdin);
    scanf("%d", &Wahl);


    if (Wahl==1){
        printf("%c%c", Buchstabe1, Buchstabe2);
    } else{
    printf("%c\n%c", Buchstabe1, Buchstabe2);
    }

    return 0;
}
