//somar e multiplicar dois numeros
#include <stdio.h>
int main(){
	float num_1,num_2,multiplicacao,soma;
	int opcao;
	printf("digite sua opcao\n");
	printf(" 1 ( para somar multiplicar )\n");
	printf(" 2 ( para somar )\n");
	scanf("%d",&opcao);
	switch(opcao)
	{
	case 1:
		printf("digite o primeiro valo\n");
		scanf("%f",&num_1);
		printf("digite o segundo valo\n");
		scanf("%f",&num_2);
		multiplicacao=num_1*num_2;
		printf("%f",multiplicacao);
		break;
	default:
		printf("digite o primeiro valo\n");
		scanf("%f",&num_1);
		printf("digite o segundo valo\n");
		scanf("%f",&num_2);
		soma=num_1+num_2;
		printf("%f",soma);
		break;
	}
	return 0;
}