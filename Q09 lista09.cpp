#include <stdio.h>
#include <stdlib.h>
void procura(int, int, int);
int main()
{
	int k[15], p[15];
	int i, j, soma = 0;
	for(i = 0; i < 15; i++)
	{
		printf("digite o valor de preenchimento do vetor\n");
		scanf("%d", &k[i]);
	}
	for(j = 0; j < soma; j++)
	{

		printf("%d", p[soma]);
	}

	return 0;
}
void procura(int k[], int p[], int soma)
{
	int m, l;
	for(m = 0; m < 15; m++)
	{
		for(l = k[m]; l >= 0; l--)
		{
			if(k[m] % l == 0)
			{
				soma += 1;
			}
			p[soma] = k[m];

		}

	}
}

