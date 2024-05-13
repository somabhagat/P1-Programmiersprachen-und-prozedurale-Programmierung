#include <stdio.h>
#include <windows.h>


int rundeINT(int n, int e)
{
    int i, zehnerPotenz=1;

    for(i=0;i<e;i++)
    {
        zehnerPotenz=zehnerPotenz*10;
    }

    return (n/zehnerPotenz)*zehnerPotenz;
}


int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int zahl,exponent;
    char antwort;

    do
    {
        printf("Geben Sie bitte die zu rundene (ganze) Zahl ein: ");
        fflush(stdin);
        scanf("%d",&zahl);
        printf("Geben Sie bitte den Exponenten ein: ");
        fflush(stdin);
        scanf("%d",&exponent);
        printf("%d ergibt nach Runden auf ein Vielfaches von 10 hoch %d den Wert: %d\n",zahl,exponent,rundeINT(zahl,exponent));
        printf("Möchten Sie nocheinmal? (j/n) -> ");
        fflush(stdin);
        scanf("%c",&antwort);
        printf("\n");
    }
    while(antwort=='j');

    printf("ENDE\n\n\n");
    system("pause");

    return 0;
}
