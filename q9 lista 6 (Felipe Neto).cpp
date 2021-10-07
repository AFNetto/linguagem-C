//ler um amatriz 5x5 e imprimir e escrever a loicalização do maior
#include<stdio.h>
#include<stdlib.h>
#define tam 2
int main()
{
	int matriz[tam][tam];
	int i, j, maior, linha_maior = 0, coluna_maior = 0;
	printf("digite os valores da matriz(linha e coluna)\n");
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	maior = matriz[0][0];
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			if(maior < matriz[i][j])
			{
				maior = matriz[i][j];
				linha_maior = i;
				coluna_maior = j;
			}
		}
	}
	
	printf("[%d] [%d]", linha_maior,coluna_maior);
	return 0;
}
