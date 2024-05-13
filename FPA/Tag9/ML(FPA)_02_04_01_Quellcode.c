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

    int a,b,c,x;

    printf("Es werden zun‰chst drei Zahlen zwischen (beiderseits einschlieﬂlich) 100 und 200 ausgelost:\n");
    a=rand()%101+100;
    printf("Zahl 1: %d\n",a);
    b=rand()%101+100;
    printf("Zahl 2: %d\n",b);
    c=rand()%101+100;
    printf("Zahl 3: %d\n",c);

    printf("\nNun wird eine dieser 3 Zahlen ausgelost:\n");
    x=rand()%3;
    if(x==0)
    {
        printf("Es wurde der erste Wert, also %d ausgew‰hlt.",a);
    }
    if(x==1)
    {
        printf("Es wurde der zweite Wert, also %d ausgew‰hlt.",b);
    }
    if(x==2)
    {
        printf("Es wurde der dritte Wert, also %d ausgew‰hlt.",c);
    }

    printf("\n\n\n");
    system("pause");
}
