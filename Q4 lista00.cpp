#include <stdio.h>

int main()
{
	int dat_hj, mes_hj, ano_hj;
	int dat_nasc, mes_nasc, ano_nasc;
	int idade;
	printf("digite a sua data de nascimento\n");
	scanf("%d", &dat_nasc);
	printf("digite a data de hoje\n");
	scanf("%d", &dat_hj);
	ano_hj = (dat_hj % 1000000) % 10000;
	mes_hj = (dat_hj % 1000000) / 1000;
	ano_nasc = (dat_nasc % 1000000) % 10000;
	mes_nasc = (dat_nasc % 1000000) / 10000;
	idade = ano_hj - ano_nasc;
	if(mes_nasc > mes_hj)
	{
		idade = idade - 1;
		printf("%d", idade);
	}
	else
	{
		printf("%d", idade);
	}
	return 0;
}
