#include<stdio.h>
int main()
{
	int numero;
	printf("Digite o numero a ser testado\n");
	scanf("%d", &numero);
	if(numero > 0)
	{
		if(numero % 2 == 0)
			printf("numero positivo e par\n");
		else
			printf("numero positivo e impar\n");

	}
	else if(numero < 0)
	{
		if(numero % 2 == 0)
			printf("numero negativo e par\n");
		else
			printf("numero negativo e impar\n");
	}
		else
			printf(" O numero e zero\n");

		return 0;
}

