#include <stdio.h>
#include <stdlib.h>
int divisao(int*);
int main(){
	int *p,num;
	printf("Digite um numero inteiro\n");
	scanf("%d",&num);
	p=&num;
	printf("O resto da divisao do valor %d\n",divisao(&num));
	printf(" o valor apontado por p e %d",*p);
}
int divisao(int *p){
	int divis;
	divis=*p%10;
	*p=*p/10;
	return divis;
}
