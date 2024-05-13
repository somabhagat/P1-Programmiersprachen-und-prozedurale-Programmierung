#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("do-while implementiert mit einem label und goto:\n\n");

    do_while_label:

    printf("Hello world!\n");
    printf("\nWollen Sie nochmals die Ausgabe \"Hello world!\" sehen? (1 fuer ja): ");
    scanf("%d", &x);
    fflush(stdin);

    if (x == 1)
        goto do_while_label;

    printf("Bye\n");

    return 0;
}
