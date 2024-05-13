#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()

{
    system("chcp 1252");
    system("cls");
    int countDown=-1;
    printf("Eingabe countDown: ");
    fflush(stdin);
    scanf("%d", &countDown);

    while(countDown<0){
        printf("startwert bitte: ");
        fflush(stdin);
        scanf("%d", &countDown);

        if (countDown<0) {
            printf("Versuch nochmal.\n");
        }
    }
    while(countDown>0){
        printf("%d\n", countDown);
        countDown=countDown-1;
    }
    printf("Guten flug!");
    return 0;
}
