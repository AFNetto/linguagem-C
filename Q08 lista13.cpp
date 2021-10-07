#include <stdio.h>
#include <stdlib.h>
int main()
{
	char matriz[3][3];
	int i, j, k, linha, coluna;
	for(i = 0; i < 9; i++)
	{
		printf("digite o numero da linha ( de 0 a 3 ) \n");
		scanf("%d", &linha);
		printf("Digite o numero da coluna ( de 0 a 3 ) \n");
		scanf("%d", &coluna);
		if(i % 2 == 0)
			matriz[linha][coluna] = 'x';
		else
			matriz[linha][coluna] = 'o';
	}
	for(j = 0; j < 3; j++)
	{
		for(k = 0; k < 3; k++)
		{
			printf("%c", &matriz[j][k]);
		}
	}
	return 0;
}
