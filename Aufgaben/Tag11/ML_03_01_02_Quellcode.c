#include <stdio.h>
#include <windows.h>

deutscherZeichensatz()
{
    system("chcp.com 1252");
    system("cls");
}

main()
{
    deutscherZeichensatz();
    printf("Bären büßen böse Taten mit viel €.\n\n\n");
    system("pause");
}
