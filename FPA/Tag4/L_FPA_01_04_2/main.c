#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Bitte geben Sie einen Buchstaben ein: ");
    fflush(stdin);
    scanf("%c", &a);

    printf("Bitte geben Sie den gleichen Buchstaben nochmals ein: ");
    fflush(stdin);
    scanf("%c", &b);

    if (a == b) {
        printf("Hervorragend! Sie sind ein echter Zeichenexperte.\n");
    } else {
        printf("Die beiden eingegebenen Zeichen sind nicht gleich.\n");
    }

    return 0;
}
