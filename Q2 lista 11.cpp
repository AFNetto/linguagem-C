//calcular a soma das distancias entre varias cidades
#include <stdio.h>
#include <stdlib.h>
void distancia(int, int);
int main()
{
	int distancia[5][5], linha, coluna;
	distancia[5][5] = {00, 15, 30, 05, 12} {15, 00, 10, 17, 28} {30, 10, 00, 03, 11} {05, 17, 03, 00, 80} {12, 28, 11, 80, 00}, {00, 15, 30, 05, 12} {15, 00, 10, 17, 28} {30, 10, 00, 03, 11} {05, 17, 03, 00, 80} {12, 28, 11, 80, 00}
	scanf("%d %d", linha, coluna);
	void(linha, coluna);
}
void cidades(int linha[], int coluna[])
{
	int posicao, l = 1, m = 1,n;
							printf("digite o valor de n\n";
							scanf("%d",n)
							for(i=1;i<=n,i++){
                            printf("digite a primeira ciade e segunda\n");
                            scanf("%d %d",l,m);
                            posicao += distancia[l][m];
							}
								printf("%d", posicao);
}
