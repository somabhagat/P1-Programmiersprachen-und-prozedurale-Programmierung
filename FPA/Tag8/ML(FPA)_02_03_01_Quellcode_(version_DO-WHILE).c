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

    if(max>0)
    {
        i=1;
        do
        {
            printf("%d ",i);
            i++;
        }
        while(i<=max);
    }

    printf("\nProgramm endet nun.\n\n\n");
    system("pause");
}
