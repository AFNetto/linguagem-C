//calcular se um numero e primo
#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero,soma=0,i;
	printf("digte o numero a ser verificado\n");
	scanf("%d",&numero);
	for(i=1;i<=numero;i++){
		if(numero%i==0)
			soma+=1;
	}
	if(soma<=2)
		printf("o numero e primo\n");
	else
     printf("O numero nao e primo\n");
 return 0;
}