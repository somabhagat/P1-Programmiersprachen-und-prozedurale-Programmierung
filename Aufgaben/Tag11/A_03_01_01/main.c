#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

 zufallzahl(int min, int max)
{
    int x;
    x=rand()% (max-min+1)+min;

    printf("Zufallszahl zwischen %d & %d ist %d", min,max, x);

    return;
}
main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int min, max;

    printf("Eingabe minimum: ");
    fflush(stdin);
    scanf("%d", &min);

    printf("Eingabe maxmimum: ");
    fflush(stdin);
    scanf("%d", &max);

    if (max<=min)
    {
        printf("Invalid input: Maximum value must be greater than minimum value.\n");
    }
    zufallzahl(min,max);

    printf("\n\n\n");

    return 0;
}
