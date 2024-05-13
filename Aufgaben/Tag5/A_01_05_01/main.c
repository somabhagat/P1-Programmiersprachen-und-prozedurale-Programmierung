#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jahr=0;
    float skap, akap, zkap, zins;

    printf("Bitte geben Sie das Start Kapital: ");
    fflush(stdin);
    scanf("%f", &skap);

    printf("Bitte geben Sie das Ziel Kapital: ");
    fflush(stdin);
    scanf("%f", &zkap);

    printf("Bitte geben Sie das Zinssatz: ");
    fflush(stdin);
    scanf("%f", &zins);

    akap=skap;
    jahr=0;

    while(akap<zkap){
        akap=akap*(zins+100)/100;
        jahr++;
    }

    printf("Nach %d Jahren betraegt Ihr Kapital: %.2f\n", jahr,akap);

    return 0;

}
