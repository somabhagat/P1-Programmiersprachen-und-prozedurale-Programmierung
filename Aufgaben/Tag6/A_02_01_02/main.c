#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2;

    do
    {
        printf("Wert x1 bitte: ");
        fflush(stdin);
        scanf("%d", &x1);

        printf("Wert x2 bitte: ");
        fflush(stdin);
        scanf("%d", &x2);
    }
    while(x1!=x2);

    printf("Neue Geheimnummer ist %d\n", x1);

    return 0;
}
