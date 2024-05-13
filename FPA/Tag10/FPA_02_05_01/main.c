#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();
    int i,min, max, auswahl, a[5];

    {
        printf("Es werden nun zun‰chst 5 Zufallszahlen ausgelost ...\n (alle zwischen beiderseits einschlieﬂlich 1 und 10)\n... und im Array a[ ] abgespeichert: \n\n");

        for(i=0;i<5;i++)
        {
            a[i]=rand()%10+1;
            printf("a[%d]=%d\n",i,a[i]);
        }
        printf("\n\nWollen Sie das Minimum ermitteln, dann geben Sie bitte 1 ein \n Wollen Sie das Maximum ermitteln, dann geben Sie bitte 2 ein \n Auswahl > ");
        fflush(stdin);
        scanf("%d", &auswahl);

        if(auswahl==1)
        {
            min=a[0];
            for (i=1;i<5;i++)
            {
                if (a[i]<min)
                {
                   min=a[i];
                }
            }
            printf("Das Minimum ist %d (PROGRAMM ENDET)",min);
        }

        if(auswahl==2)
        {
            max=a[0];
            for(i=1;i<5;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            printf("Das Maximum ist %d (PROGRAMM ENDET)",max);
        }
        return 0;
    }
}
