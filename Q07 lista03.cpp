/*calcular n termos de uma sequencia*/
#include <stdio.h>
int main()
{
	int termos, numero = 1, i, soma = 0;
	printf("digite o numero de termos a serem calculados\n");
	scanf("%d", &termos);
	for(i = 1; i <= termos; i++)
	{
		soma += numero;
		numero *= 2;
	}
	printf(" A soma dor termos e: %d", soma);
	return 0;
}
