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
    printf("B�ren b��en b�se Taten mit viel �.\n\n\n");
    system("pause");
}
