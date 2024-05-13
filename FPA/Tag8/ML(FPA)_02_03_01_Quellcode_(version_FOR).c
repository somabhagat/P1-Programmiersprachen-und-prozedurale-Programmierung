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

    for(i=1;i<=max;i++)
    {
        printf("%d ",i);
    }

    printf("\nProgramm endet nun.\n\n\n");
    system("pause");
}
