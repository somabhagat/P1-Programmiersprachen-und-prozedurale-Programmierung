#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void gesamt(float e, float r,int s)
{
    float g;
    g=(e-(e*r/100))*s;
    printf("Gesamtpreis ist %.2f", g);

}
 int main()
{
    system("chcp 1252");
    system("cls");

    float e,r;
    int s;

    printf("Einzelpreis bitte: ");
    fflush(stdin);
    scanf("%f", &e);

    printf("Rabatt bitte: ");
    fflush(stdin);
    scanf("%f", &r);

    printf("Stückzahl bitte: ");
    fflush(stdin);
    scanf("%d", &s);

    gesamt(e,r,s);
system("pause");

}
