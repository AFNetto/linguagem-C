#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float cosseno(float);
int fatorial(int);
int main(){
	float x;
	printf("digite o valor a ser calculado o cosseno\n");
	scanf("%f",&x);
	printf("O valor do cosseno e:%f",cosseno(x));
	return 0;
}
float cosseno(float x){
	float cosseno=0;
	int i;
	for(i=1;i<=20;i++){
	cosseno+=pow(x,i)/fatorial(i);
	}
		cosseno*(-1);
	return cosseno;
}
int fatorial(int i){
	int fatorial=1,j;
	for(j=2;j<=i;i++){
		fatorial*=j;
	}
	return fatorial;
}