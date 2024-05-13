#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char ant;
    int j;

    for (j=1; j<5; j++)
    {
        printf("aktueller wert: %d\n", j);
        printf("Ändern? (j/n) \n");
        fflush(stdin);
        scanf("%c",&ant);

        if(ant=='j')
        {
            printf("Zahl bitte: \n");
            fflush(stdin);
            scanf("%d", &j);
        }
    }

    return 0;
}
