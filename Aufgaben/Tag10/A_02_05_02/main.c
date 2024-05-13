#include <stdio.h>
#include <stdlib.h>


int main()
{
    char arrA[5], arrB[5];
    int i;
    printf("Bitte geben sie erste 5 Buchstaben: \n");
    for(i=0;i<5;i++){
        printf("arrA[%d]: \n", i);
        fflush(stdin);
        scanf("%c", &arrA[i]);

    }
    for(i=0;i<5;i++){
        arrB[i]=arrA[4-i];
        printf("\n arrB[%d]= %c", i, arrB[i]);
    }
    return 0;
}
