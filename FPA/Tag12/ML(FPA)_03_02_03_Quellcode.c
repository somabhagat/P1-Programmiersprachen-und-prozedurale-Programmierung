#include <stdio.h>
#include <windows.h>


char schreibeHalloAusserCHARxUndZaehleAenderungen(char zeichen)
{
    int anzahl=0;

    if(zeichen!='H')
    {
        printf("H");
    }
    else
    {
        anzahl++;
        printf("*");
    }

    if(zeichen!='a')
    {
        printf("a");
    }
    else
    {
        anzahl++;
        printf("*");
    }

    if(zeichen!='l')
    {
        printf("l");
    }
    else
    {
        anzahl++;
        printf("*");    }

    if(zeichen!='l')
    {
        printf("l");
    }
    else
    {
        anzahl++;
        printf("*");
    }

    if(zeichen!='o')
    {
        printf("o");
    }
    else
    {
        anzahl++;
        printf("*");    }

    return anzahl;
}


int main(void)
{
    system("chcp.com 1252");
    system("cls");

    char c;

    printf("Geben Sie bitte ein Zeichen ein: ");
    fflush(stdin);
    scanf("%c",&c);

    printf("\n\nAnzahl der veränderten Zeichen: %d",schreibeHalloAusserCHARxUndZaehleAenderungen(c));

    printf("\n\n\n");
    system("pause");

    return 0;
}
