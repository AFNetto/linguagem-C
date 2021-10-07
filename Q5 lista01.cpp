#include <stdio.h>

int main()
{
	int dia, mes, ano;
	printf("digite o dia\n");
	scanf("%d", & dia);
	printf("digite o mes\n");
	scanf("%d", & mes);
	printf("digite o ano\n");
	scanf("%d", & ano);
	if(dia > 31)
		printf("A data nao existe\n");
	else if(mes > 12)
		printf("A data nao existe\n");
	else if(ano > 2018)
		printf("A data nao existe\n");
	else
		printf("A data existe\n");
	return 0;
}
