#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


wochentag(int a)
{
   printf("       Die Zahl %d entspricht dem Wochentag ",a);
   if(a==1)
   {
       printf("Montag\n");
   }
   if(a==2)
   {
       printf("Dienstag\n");
   }
   if(a==3)
   {
       printf("Mittwoch\n");
   }
   if(a==4)
   {
       printf("Donnerstag\n");
   }
   if(a==5)
   {
       printf("Freitag\n");
   }
   if(a==6)
   {
       printf("Samstag\n");
   }
   if(a==7)
   {
       printf("Sontag\n");
   }
}

main()
{
    system("chcp.com 1252");
    system("cls");

    srand(time(NULL));
    rand();

    int i,zahl;

    for(i=1;i<=3;i++)
    {
        printf("*****************************************************************\n");
        printf("************************* Hauptprogramm *************************\n");
        printf("*****************************************************************\n");

        zahl=rand()%7+1;
        printf(" %d.Zufallszahl zwischen (beiderseits einschließlich) 1 und 7: %d",i,zahl);

        printf("\n*****************************************************************\n");
        printf("*************************** Funktion ****************************\n");
        printf("*****************************************************************\n");
        wochentag(zahl);
    }

    printf("\n\n\n");
    system("pause");
}
