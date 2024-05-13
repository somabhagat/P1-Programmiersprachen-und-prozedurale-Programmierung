#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int stufen, breite;

    stufen = 3;
    breite = 4;

    for (i = 0; i < stufen; i++)
    {
    for (j = 0; j < stufen * breite; j++)
        {
        if (j >= i*breite && j < (i + 1)*breite) //0&&4
            {
                printf("*");
            }
        else
            {
                printf(" ");
            }
        }
        putchar('\n');
    }
    return 0;
}

