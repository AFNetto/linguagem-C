#include <stdio.h>
int main(){
	float valor_bruto,valor_final;
	printf("digite o valor do produto\n");
	scanf("%f", & valor_bruto);
	if(valor_bruto < 20)
		valor_final = valor_bruto * 1.45;
	else
	{
		valor_final = valor_bruto*1.30;
	}
	printf("O valor final e: %f",valor_final);
	return 0;
}