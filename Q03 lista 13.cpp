#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, k, l, m;
	int matriz[10][10], maior, menor, aux;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Digite o preenchimento da matriz\n");
			scanf("%d", &matriz[i][j]);
		}
	}
	maior = matriz[0][0];
	for(k = 0; k < 4; k++)
	{
		for(l = 0; l < 4; l++)
		{
			if(matriz[i][i] > maior)
				menor= maior = matriz[i][j];
			aux = i;
		}
	}
	for(m = 0; m < 4; m++)
	{
		if(matriz[aux][m] < menor){
		menor = matriz[aux][m];
		}
	}
	printf(" O elemento minimax  :%d", menor);
	return 0;
}
