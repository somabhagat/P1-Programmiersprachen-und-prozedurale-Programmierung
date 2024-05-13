#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i;
    char zeichenKurz[3];
    char zeichenLang[6];

    for(i=0;i<3;i++)
    {
        printf("Geben Sie bitte das %d. Zeichen ein: ",i+1);
        fflush(stdin);
        scanf("%c",&zeichenKurz[i]);
    }

    printf("\nDas Array zeichenKurz[] hat nun die folgenden Felder-Inhalte:\n");
    for(i=0;i<3;i++)
    {
        printf("zeichenKurz[%d]=%c\n",i,zeichenKurz[i]);
    }

    printf("\nNun wird das Array zeichenLang[] gefüllt ...\n");
    for(i=0;i<3;i++)
    {
        zeichenLang[i]=zeichenKurz[i];
        zeichenLang[5-i]=zeichenKurz[i];
    }

    printf("\n... und anschließend zur Kontrolle ausgegeben:\n");
    for(i=0;i<6;i++)
    {
        printf("zeichenLang[%d]=%c\n",i,zeichenLang[i]);
    }

    printf("\n\n\n");
    system("pause");
}
