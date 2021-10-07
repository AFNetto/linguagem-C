#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void ordenacao (char[], int);
int main()
{
	int i, N, k;
	char vetor[100];
	setlocale(LC_ALL, "portuguese");
	printf("Digite , por favor,o número de termos do vetor (até 100)\n");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		printf("digite os nomes de preenchimento do vetor\n");
		scanf("%c", &vetor[i]);
	}
	for(k = 0; k < N; k++)
	{
		printf("%c", vetor[k]);
	}
	return 0;
}
void ordenacao(char vetor[], int N)
{
	int aux, j, k;
	for(k = 0; k < N; k++){
		for(j = 0; j < N; j++)
		{
			if(vetor[j] > vetor[j + 1])
				aux = vetor[j];
			vetor[j] = vetor[j + 1];
			vetor[j + 1] = aux;
		}
	}
}
