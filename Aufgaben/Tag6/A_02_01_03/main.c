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

    printf("L�nge: ");
    fflush(stdin);
    scanf("%d", &l);



    do{
        printf("Fl�che: ");
        fflush(stdin);
        scanf("%d", &f);
        r=b*l;
        v++;
    } while (r!=f);

    printf("Sie ben�tigten %d versuche bis sie die korrekte Fl�che eingaben!\n", v);

    return 0;
}
