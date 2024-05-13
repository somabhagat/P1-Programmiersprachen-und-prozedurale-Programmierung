#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>

main()


{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();
    int i;
    char a[i], b[i];

    for (i=0;i<3;i++){
    printf("Geben Sie bitte das %d. Zeichen ein:",i+1);
    fflush(stdin);
    scanf("%c", &a[i]);
    }

    printf("Das Array zeichenKurz[] hat nun die folgenden Felder-Inhalte:\n");
    for (i=0;i<3;i++){
        printf("zeichenKurz[%d]=%c \n", i,a[i]);
    }
    printf("Nun wird das Array zeichenLang[] gefüllt und anschließend zur Kontrolle ausgegeben: \n");

    for (i=0;i<3;i++){
        b[i]=a[i];
        b[5-i]=a[i];

    }
    for (i=0;i<6;i++){
        b[5-i]=a[i];
        printf("zeichenLang[%d]=%c \n", i,b[i]);
    }


    return 0;
}
