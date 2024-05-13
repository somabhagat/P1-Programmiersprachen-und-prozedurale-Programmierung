#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int i,zuf,arr[3];

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Es werden zun‰chst Zufalls-Zahlen zwischen (beiderseits einschlieﬂlich) 1 und 20 ausgelost:\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ++++++++++++++++++++++++\n\n");
    for(i=0;i<3;i++)
    {
        zuf=rand()%20+1;
        if(zuf<=10)
        {
            printf(" Der ausgeloste Wert %d ist kleiner gleich 10 und wird in arr[%d] abgespeichert.\n",zuf,i);
            arr[i]=zuf;
        }
        else
        {
            printf(" Der ausgeloste Wert %d ist NICHT kleiner gleich 10 und wird daher NICHT abgespeichert.\n",zuf);
            i--;
        }
    }

    printf("\n\nZur Kontrolle werden die Inhalte der 3 Felder des Arrays arr[] ausgegeben:\n\n");
    for(i=0;i<3;i++)
    {
        printf(" arr[%d]=%d\n",i,arr[i]);
    }

    printf("\n\n\n");
    system("pause");
}
