#include <stdio.h>
#include <windows.h>

bewertung(int x)
{
    int i;
    if(x==0)
    {
        printf("Kein Kommentar!");
    }
    else
    {
        printf("ANSI C ist ");
        for(i=0;i<x;i++)
        {
            printf("sehr ");
        }
        printf("toll!");
    }
}

main()
{
    int x;

    printf("Geben Sie bitte einen Wert zwischen 0 und 5 ein: ");
    scanf("%d",&x);
    bewertung(x);

    printf("\n\n\n");
    system("pause");
}
