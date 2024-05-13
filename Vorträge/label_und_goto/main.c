#include <stdio.h>
#include <stdlib.h>

int main()
{
    label1:
    printf("Hello world!\n");

    goto label3;

    label2:
    printf("Hallo Welt!\n");

    label3:
    printf("Ola mundo!\n");

    return 0;
}
