//ler dois vetores de 200 posições e trocar o primeiro de A com o 200 de B até o 200 de A com 1 de B
#include <stdio.h>
#include <stdlib.h>
int main(){
	int grupoA,grupoB,aux1,aux2,aux3,aux4;
	aux1+=a[1];
	aux2-=b[200];
	aux1=aux2;
	aux3+=b[1];
	aux4-=b[200];
	aux4=aux3;
	printf("%d",grupoA);
	printf("%d",grupoB);
	printf("%d",aux1);
	printf("%d",aux3);
	return 0;
	
}
int grupoA(int grupo[2]){
int a;
printf("digite os 200 numeros\n");
for(a=0;a<=200;a++)
	scanf("%d",&grupoA[a]);
return a;
}
int grupoB(int grupo[2]){
	int b;
	for(b=0;b<=2;b++)
		scanf("%d",&grupoB[b])
	return b;
}