//calcular o fatorial de quatro numeros
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, N, fatorial=1;
	for(j = 1; j <= 4; j++)
	{
		printf("\n digite o numero para o calculo do fatorial\n");
		scanf("%d", &N);
		fatorial=1;
		for(i = N; i >= 1; i--)
		{
			fatorial *= i;
		}
	printf(" o fatorial do numero e:%d\n", fatorial);
	}
	return 0;
}
