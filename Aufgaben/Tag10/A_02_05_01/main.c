#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LENGTH 5

int main()
{
    int i, zuf, arr[ARR_LENGTH];

    srand(time(NULL));
    rand();

    for (i = 0; i < ARR_LENGTH; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d\n", arr[i]);
    }

    zuf = rand() % ARR_LENGTH;   /* 0 <= zuf < ARR_LENGTH */

    printf("arr[%d] = %d\n", zuf, arr[zuf]);

    /* Überschreiten der Feldgrenzen => Speicherverletzung bzw. Segmentation violation
    for (i = 0; i < ARR_LENGTH + 1000; i++) {
            printf("%d\n", arr[i]);
    }*/

    return 0;
}
