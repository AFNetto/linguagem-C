#include <stdio.h>
#include <stdlib.h>
float media_aritmetica(float,float,float);
float media_ponderada(float,float,float);
float media_harmonica(float,float,float);
int main(){
	float num1,num2,num3;
	int opcao;
	printf("digite o primeiro numero\n");
	scanf("%f",&num1);
		printf("digite o segundo numero\n");
	scanf("%f",&num2);
		printf("digite o terceiro numero numero\n");
	scanf("%f",&num3);
	printf("digite a opcao de calculo\n");
	printf(" 1   calcular a media aritmetica\n");
	printf(" 2   para calculo da media ponderada\n");
	printf(" 3   para calculo da media harmonica\n");
	scanf("%d",&opcao);
	switch(opcao)
	{
	case 1:
		printf("a media aritmetica e:%.2f",media_aritmetica(num1,num2,num3));
		break;
	case 2:
		printf(" A media ponderada e:%.2f",media_ponderada(num1,num2,num3));
		break;
	default:
		printf("A media harmonica e:%.2f",media_harmonica(num1,num2,num3));
		break;
	}
	return 0;
}
float media_aritmetica(float num1,float num2,float num3){
	float soma,media;
	soma=num1+num2+num3;
	media=soma/3;
	return media;
}
float media_ponderada(float num1,float num2, float num3){
	float soma,media,num01,num02,num03;
	num01=num1*3;
	num02=num2*3;
	num03=num3*4;
	soma=num01+num02+num03;
	media=soma/10;
	return media;
}
float media_harmonica(float num1,float num2, float num3){
	float soma,media;
	soma=(1/num1)+(1/num2)+(1/num3);
	media=3/soma;
	return media;
}
