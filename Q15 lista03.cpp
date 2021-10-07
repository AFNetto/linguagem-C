//calcular o somatorio
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i, somatorio = 0, N, k, multiplicacao = 1, sub;
	printf("digite o numero de termos\n");
	scanf("%d", &N);
	k = N - 1;
	for(i = 1; i <= k; i++)
	{
		multiplicacao = pow(N, i);
		sub = N - i;
		somatorio += multiplicacao / sub;

	}

	printf("O somatorio e:%d", somatorio);
	return 0;
}
