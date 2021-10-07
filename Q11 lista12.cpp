#include <stdio.h>
#include <stdlib.h>
void medidasDoRetangulo(int, int, int*, int*);
int main()
{
	int L1, L2, A, P;
	printf("Digite o primeiro lado\n");
	scanf("%d", &L1);
	printf("Digite o SEGUNDO lado\n");
	scanf("%d", &L2);
	medidasDoRetangulo(L1, L2, &A, &P);
	printf("A area %d", A);
	printf(" O perimetro %d", P);
	return 0;
}
void medidasDoRetangulo(int L1, int L2, int *A, int *P)
{
	int perimetro, area;
	perimetro = L1 + L1 + L2 + L2;
	area = L1 * L2;
	*A = area;
	*P = perimetro;
}
