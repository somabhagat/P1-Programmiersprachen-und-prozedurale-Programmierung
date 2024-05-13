#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");
    int v=-1, a;
    do{
        printf("Wie viel runde soweit? \n");
        fflush(stdin);
        scanf("%d", &a);
        v++;

    }  while(v!=a);

        printf("Es gab insgesamt %d Schleifendurchläufe", v);

    return 0;
}
