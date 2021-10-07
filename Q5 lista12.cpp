//
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,resultante;
	printf("digite o numero\n");
	scanf("%d",numero);
	printf("%d",resultante)
	resultante= int mudanca(numero);
	printf("%d",num);
	num=int mudanca(numero);
}
int mudanca(int numero){
	int resto,num,aux;
	resto=numero%10;
	aux=numero/10;
	num=aux;
	return resto,num;
}