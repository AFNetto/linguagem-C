//receber um array[30] e separar em pares e impares
#include <stdio.h>
#include <stdlib.h>
void separacao (int[], int[], int[]);
void exibicao(int[]);
int main()
{
	int array[3], i;
	printf("digite os valores do vetor\n");
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &array[i]);
	}
separacao(Ar, P, I);
exibicao(Pares, Impares);
}
void separacao(int Ar[], int P[], int I[]){
	int j;
	for(j = 0; j < 3; j++){
		if(j%2==0)
			P[j]=Ar[j];
		else
		I[j]=Ar[j];
	}
	exibicao(P,I);
}
void exibicao(int Pares[],int impares[]){
	int j;
	for(j = 0; j < 3; j++){
		Pares[j]=P[j];
		Impares[j]=I[j];
		printf( "%d",Pares);
		printf( "%d",Impares);
}
