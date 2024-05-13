#include <stdio.h>
#include <windows.h>


float x_hoch_n(float x, int n)
{
    int i;
    float potenz=1;

    for(i=0;i<n;i++)
    {
        potenz=potenz*x;
    }

    return potenz;
}

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int n;
    float x,potenz;

    printf("Bitte eine Kommazahl eingeben: ");
    fflush(stdin);
    scanf("%f",&x);

    printf("Bitte eine ganze Zahl eingeben: ");
    fflush(stdin);
    scanf("%d",&n);

    potenz=x_hoch_n(x,n);

    printf("%f hoch %d ist %f",x,n,potenz);

    printf("\n\n\n");
    system("pause");

    return 0;
}
