#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int N, i, j, k;
	int vetor[100], media, soma = 0, result = 0;
	setlocale(LC_ALL, "portuguese");
	printf("Digite,por favor,a quantidade de termos para preenchimento do vetor\n");
	scanf("%d", &N);
	for(j = 0; j < N; j++)
	{
		printf("Digite os numeros para preenchimento do veotr\n");
		scanf("%d", &vetor[j]);
	}
	for(i = 0; i < N; i++)
	{
		soma += vetor[i];
	}
	media = soma / N;
	for(k = 0; k < N; k++)
	{
		if(vetor[k] > media)
			result += 1;
	}
	printf("O numero de termos a cima da media é : %d", result);
	return 0;
}
