#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    do {
        printf("Bitte geben Sie einen Integer ein: ");
        fflush(stdin);
        scanf("%d", &x);
    } while(x % 10 != 0);

    printf("Die Zahl: %d ist ohne Rest durch 10 dividierbar.\n", x);

    return 0;
}
