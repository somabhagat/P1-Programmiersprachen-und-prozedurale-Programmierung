#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    char zeichen1,zeichen2;

    printf("Geben Sie bitte ein beliebiges Zeichen ein: ");
    fflush(stdin);
    scanf("%c",&zeichen1);

    if(zeichen1=='a')
    {
        zeichen2='b';
    }
    else
    {
        zeichen2='a';
    }

    for(;zeichen1!=zeichen2;)
    {
        printf("Wiederholen Sie bitte Ihre erste Eingabe: ");
        fflush(stdin);
        scanf("%c",&zeichen2);
    }

    printf("\nIhre Eingabe war korrekt ... PROGRAMM-ENDE ...\n\n\n");
    system("pause");
}
