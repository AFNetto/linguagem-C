#include <stdio.h>
int main(){
	float salario,prestacao,valor_permitido;
	printf("digite o valor bruto do seu salario\n");
	scanf("%f",&salario);
	printf("digite o valor da prestacao\n");
	scanf("%f",&prestacao);
	valor_permitido = salario*0.3;
	if(prestacao<=valor_permitido)
		printf("o credito pode ser concedido\n");
	else
	
		printf("infelizmente,o credito nao pode ser concedido\n");
	return 0;
}

