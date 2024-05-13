#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, input, sum, loop_count;
    do{
        printf("+ve Zahl bitte: ");
        fflush(stdin);
        scanf("%d", &num);
    } while (num<=0);

    sum=num;

    do{
        printf("Summe bitte: ");
        fflush(stdin);
        scanf("%d", &input);

        sum=sum-input;
        if (sum>0){
            printf("fehlt noch: %d\n", sum);
        }
        loop_count=loop_count+1;
    } while(sum>0);
    if(sum==input){
        printf("Bravo!");
    } else printf("zu viel");

    return 0;
}
