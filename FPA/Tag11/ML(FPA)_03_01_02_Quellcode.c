#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


zufallSuche(int a)
{
   int i=1;
   int x;

   do
   {
        x=rand()%5+1;
        printf(" %d.Zufallszahl: %d\n",i,x);
        i++;
   }
   while(x!=a);

   printf(" ... Treffer!");
}

main()
{
    system("chcp.com 1252");
    system("cls");

    srand(time(NULL));
    rand();

    int zahl;

    printf("***********************************************************\n");
    printf("********************** Hauptprogramm **********************\n");
    printf("***********************************************************\n\n");

    printf(" Geben Sie bitte eine ganze Zahl (1,2,3,4 oder 5) ein: ");
    fflush(stdin);
    scanf("%d",&zahl);

    printf("\n\n***********************************************************\n");
    printf("************************ Funktion *************************\n");
    printf("***********************************************************\n\n");
    zufallSuche(zahl);

    printf("\n\n\n");
    system("pause");
}
