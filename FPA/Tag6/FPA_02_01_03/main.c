#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z,s,c=0;

    printf("zahl: ");
    fflush(stdin);
    scanf("%d", &z);

    printf("Wie viele Schleife um teilen durch 2 zu Ergebnis 0 ohne reste: ");
    fflush(stdin);
    scanf("%d", &s);

    do
    {
        z=z/2;
        c++;
    }
    while(z!=0);
    if (c==s)
    {
        printf("Toll!") ;

    }
    else
    {

        printf("Pech!");

    }
    return 0;
}
