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

    int i,zaehler,w1,w2;

    for(i=0;i<6000;i++)
    {
        w1=rand()%6+1;
        w2=rand()%6+1;
        if(w1==w2)
        {
            zaehler++;
        }
    }

    printf("Es gab insgesamt %d Dubletten\n\n\n",zaehler);
    system("pause");
}
