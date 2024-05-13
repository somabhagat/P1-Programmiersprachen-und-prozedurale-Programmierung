#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    do_while_label:

    printf("Hello\n");
    printf("Nochmal? ");
    scanf("%d", &x);
    fflush(stdin);

    if(x==1){
        goto do_while_label;
    }

    else{
        printf("Bye");
    }

    return 0;
}
