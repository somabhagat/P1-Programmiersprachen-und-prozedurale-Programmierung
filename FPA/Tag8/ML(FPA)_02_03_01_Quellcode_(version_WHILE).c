#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,max;

    printf("Geben Sie bitte das Maximum ein: ");
    fflush(stdin);
    scanf("%d",&max);

    i=1;
    while(i<=max)
    {
        printf("%d ",i);
        i++;
    }

    printf("\nProgramm endet nun.\n\n\n");
    system("pause");
}
