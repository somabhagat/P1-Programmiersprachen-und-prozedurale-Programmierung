// ML(FPA)_01_03_02

#include <stdio.h>

main()
{
	char zeichen;

	printf("Geben Sie bitte ein Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&zeichen);

	printf("\n\t%c\n",zeichen);
	printf("\t%c%c\n",zeichen,zeichen);
	printf("\t%c%c%c\n",zeichen,zeichen,zeichen);

	printf("\n\nGeben Sie bitte ein Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&zeichen);

	printf("\n\t%c%c%c\n",zeichen,zeichen,zeichen);
	printf("\t%c%c%c\n",zeichen,zeichen,zeichen);
	printf("\t%c%c%c\n",zeichen,zeichen,zeichen);

	printf("\n\nGeben Sie bitte ein Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&zeichen);

	printf("\n\t%c%c%c\n",zeichen,zeichen,zeichen);
	printf("\t%c %c\n",zeichen,zeichen);
	printf("\t%c%c%c\n",zeichen,zeichen,zeichen);
}
