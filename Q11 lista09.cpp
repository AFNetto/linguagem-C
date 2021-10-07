#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int  i, vetor[100], vetoraux[100];
	int aux, j, num = 0, k, l;
	for(i = 0; i < 100; i++)
	{
		printf("Digite o preenchimento de vetor\n");
		scanf("%d", &vetor[i]);
	}
	for(j = 0; j < 100; j++)
	{
		if(vetor[j] <= 0)
		{
			aux = vetor[j];
			for(k = j; k < 100; k++)
			{
				vetor[k] = vetor[k + 1];
			}
			vetoraux[num] = vetor[j];
			num += 1;
		}
	}
	for(k = 0; k < 100; k++)
	{
		printf("O vetor compacto e:%d\n", &vetor[k]);
	}
	for(l = 0; l < num; l++)
	{
		printf("Os numeros retirados foram %d", &vetoraux[l]);
	}
	return 0;

}
