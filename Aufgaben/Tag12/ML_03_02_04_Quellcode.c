#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int zufall(int a, int b)
{
    return rand()%(b-a+1)+a;
}

char istVolljaehrig(int a)
{
    if(a>=18)
    {
        return 'j';
    }
    return 'n';
}

int main(void)
{
    srand(time(NULL));
    rand();

    system("chcp.com 1252");
    system("cls");

    int i,zuf;
    char antwort;

    for(i=0;i<100;i++)
    {
        zuf=zufall(1,100);
        antwort=istVolljaehrig(zuf);
        printf("Eine Person vom Alter %d ist volljährig? Antwort: %c\n",zuf,antwort);
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}
