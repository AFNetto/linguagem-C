#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[10][10];
	int i, j, k, l, m;
	int aux,n,o,p;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("digite o preenchimento da matriz\n");
			scanf("%d", &matriz[i][j]);
		}
	}
	for(k = 0; k < 10; k++)
	{
		for(l = 0; l < 10; l++)
		{
			printf("%d", matriz[k][l]);
		}
	}
	for(m = 0; m < 10; m++)
	{
		aux = matriz[2][m];
		matriz[2][m] = matriz[8][m];
		matriz[8][m] = aux;

	}
	for(n = 0; n < 10; n++)
	{
		aux = matriz[n][4];
		matriz[n][4] = matriz[n][10];
		matriz[n][4] = aux;

	}
	for(o = 0; o < 10; o++)
	{
		for(p = 0; p < 10; p++)
		{
			printf("%d",matriz[o][p]);
		}
	}
	return 0;
}
