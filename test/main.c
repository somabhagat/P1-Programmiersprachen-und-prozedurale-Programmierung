#include <stdio.h>
#include <windows.h>

void meineFunktion (int x)
{
x=x*2;
if(x%4==0) printf("%d",x);
}

int main (void)
{
system("chcp 1252");
system("cls");

int i;
for (i=0;i<3;i++) meineFunktion(i);
printf("\n\n\n\n");

system("pause");
return 0;
}
