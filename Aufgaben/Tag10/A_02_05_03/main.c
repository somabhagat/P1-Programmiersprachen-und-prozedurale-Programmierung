#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[30];
    int i;

    for (i=0;i<30;i=i+3){
        arr[i] = 1.5;
        arr[i+1] = 2.5;
        arr[i+2] = 3.5;
        printf("\narr[%d]= %.1f",i,arr[i]);
        printf("\narr[%d]= %.1f",i+1,arr[i+1]);
        printf("\narr[%d]= %.1f",i+2,arr[i+2]);
    }

    return 0;
}
