#include <stdio.h>
#include <stdlib.h>

 int main()
    {
        int aktJahr, gebJahr, alter;
        char schonGebGehabt;

        printf("Bitte geben Sie aktuelle Jahr ein: ");
        fflush(stdin);
        scanf("%d", &aktJahr);

        printf("Bitte geben Sie ihr Geburtsjahr ein: ");
        fflush(stdin);
        scanf("%d", &gebJahr);

        printf("Haben Sie schon Geburtstag gehabt?: ");
        fflush(stdin);
        scanf("%c", &schonGebGehabt);

        if (schonGebGehabt == 'j') {
                alter=aktJahr-gebJahr;
        } else{
            alter = aktJahr - gebJahr - 1;
        }
        printf ("Sie sind in diesem Jahr: %d Jahr jung. \n", alter);

      return 0;
    }



