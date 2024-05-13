#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Geben Sie bitte eine ganze Zahl ein: ");
    fflush(stdin);
    scanf("%d", &x);

    while(x>1)
    {
        x=x/2;
        printf("Aktueller Wert von x:%d\n", x);
    }
     printf("Die Schleife wurde abgearbeitet");

    return 0;
}
