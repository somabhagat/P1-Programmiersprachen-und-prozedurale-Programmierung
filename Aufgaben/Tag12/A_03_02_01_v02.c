#include <stdio.h>
#include <windows.h>

float prozentsatz(float g, float pw)
{
    return ((pw/g)*100);
}
 
int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");
    
    float grundwert, prozentwert, p;

    printf("Geben Sie den Grundwert ein: ");
    fflush(stdin);
    scanf("%f", &grundwert);

    printf("Geben Sie den Prozentwert ein: ");
    fflush(stdin);
    scanf("%f", &prozentwert);

    p = prozentsatz(grundwert, prozentwert);

    printf("Der \"Prozentsatz\" ist %f%%.\n", p);
    printf("Der \"Prozentsatz\" ist %.3f%%.\n", p);

    printf("\n\n");
    return 0;
}