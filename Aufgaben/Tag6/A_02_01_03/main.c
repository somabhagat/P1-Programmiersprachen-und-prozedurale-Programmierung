#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");

    int b, l, f, r, v;

    printf("Breite: ");
    fflush(stdin);
    scanf("%d", &b);

    printf("Länge: ");
    fflush(stdin);
    scanf("%d", &l);



    do{
        printf("Fläche: ");
        fflush(stdin);
        scanf("%d", &f);
        r=b*l;
        v++;
    } while (r!=f);

    printf("Sie benötigten %d versuche bis sie die korrekte Fläche eingaben!\n", v);

    return 0;
}
