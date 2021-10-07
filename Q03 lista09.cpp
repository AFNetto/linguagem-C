#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[100], i, j, k, N, aux = 1;
	printf("Qual o tamanho do vetor a ser preenchido\n");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		printf("Digite o preenchimento do vetor\n");
		scanf("%d", &vetor[i]);
	}
	for(j = 0; j <= N - 1; j++)
	{
		for(i = 0; i <= N - 1; i++)
		{
			if(vetor[j] == vetor[i + aux])
			{
				for(k = i + aux; k < N; k++)
				{
					vetor[k] = vetor[k + 1];
				}
				N -= 1;
			}
		}
		aux += 1;
	}
	printf("O vetor agora\n");
	for(i = 0; i < N - 1; i++)
	{
		printf("%d", vetor[i]);
	}
	return 0;
}
