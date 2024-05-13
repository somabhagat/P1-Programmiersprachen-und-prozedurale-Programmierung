#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, b;

    printf("Was ist der Wert für a: ");
    fflush(stdin);
    scanf("%d", &a);


    printf("Was ist der Wert für b: ");
    fflush(stdin);
    scanf("%d", &b);



    if (a>b) {
        printf("Die Maximum der beiden Zahlen %d und %d ist %d", a, b, a);
    }
    else {
        printf("Die Maximum der beiden Zahlen %d und %d ist %d", a, b, b);
    }

     /*Version 3 -Mit dem ternary Operator*/
 int max;
max = (a>=b) ? a:b;
putchar('\n');
printf("Das max von %d und %d ist %d\n", a,b,max);
    return 0;
}
