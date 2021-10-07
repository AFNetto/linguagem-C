#include <stdio.h>
int main()
{
	float num_dependentes, salario_min, valor_imposto;
	float desconto, valor_final, salario_familiar;
	printf("Digite o valor do salario minimo\n");
	scanf("%f", & salario_min);
	printf("Digite o valor da renda familiar\n");
	scanf("%f", & salario_familiar);
	printf("Digite o numero de depentes\n");
	scanf("%f", & num_dependentes);
	if(salario_familiar <= 2 * salario_min)
	printf("voces estao insentos do imposto de renda\n");
	else if(salario_familiar > 2 * salario_min && salario_familiar <= 3 * salario_min)
		valor_imposto = 0.05 * salario_familiar;
	else if(salario_familiar > 3 * salario_min && salario_familiar <= 5 * salario_min)
		valor_imposto = 0.1 * salario_familiar;
	else if(salario_familiar > 5 * salario_min && salario_familiar <= 7 * salario_min)
		valor_imposto = 0.15 * salario_familiar;
	else
		valor_imposto = 0.2 * salario_familiar;
	desconto = 5 * num_dependentes;
	valor_final = valor_imposto - (desconto / 100) * valor_imposto;
	printf(" O valor do imposto de renda a ser pago sera %f", valor_final);
	return 0;
}
