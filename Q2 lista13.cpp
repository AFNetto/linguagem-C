//ler uma matriz 5,5 e criar dois vetores sl(5)-soma das linhas e sc(5)soma das colunas
#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
	int matriz[TAM][TAM], SC, SL, Soma_linha = 0, soma_coluna = 0;
	int i, j, aux, aux2;
	printf("digite os valores da matriz (linha e coluna)\n");
	for(i = 0; i <= TAM; i++)
	{
		for(j = 0; j <= TAM; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i = 0; i <= TAM; i++)
	{
		SL = aux + i;
		aux = [i + 1];
		for(j = 0; j <= TAM; j++)
		{
			SC = aux + j;
			aux2 = [j + 1];

		}

	}
	printf("%d %d", matriz[i][j], SL, SC);
	return 0;
}
