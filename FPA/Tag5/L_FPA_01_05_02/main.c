#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");
    int z1, z2, erg, richtig=0, falsch=0;
    char rundenAuswahl='j';

    while (rundenAuswahl=='j'){
        printf("Zahl1 bitte: ");
        fflush(stdin);
        scanf("%d", &z1);

        printf("Zahl2 bitte: ");
        fflush(stdin);
        scanf("%d", &z2);

        printf("Summe %d und %d bitte: ", z1, z2);
        fflush(stdin);
        scanf("%d", &erg);

        if (erg==(z1+z2)){
            printf("richtig\n");
            richtig++;  /*richtig+1*/
        } else{
        printf("falsch\n");
        falsch++;
               }

        printf("noch eine Berechnung? (j/n)");
        fflush(stdin);
        scanf("%c", &rundenAuswahl);
    }
    printf("Bei %d Versuchen lagen Sie %d-Mal richting und %d-Mal falsch.", (richtig+falsch), richtig, falsch);
    return 0;
}
