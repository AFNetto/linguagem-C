#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distancia(float, float, float, float);
float area(float, float, float, float, float, float);
int main()
{
	float x1, x2, x3, y1, y2, y3;
	printf("digite as coordenadas do primeiro ponto( da forma x1,y1)\n");
	scanf("%f %f", &x1, &y1);
	printf("digite as coordenadas do segundo ponto( da forma x2,y2)\n");
	scanf("%f %f", &x2, &y2);
	printf("digite as coordenadas do terceiro ponto( da forma x3,y3)\n");
	scanf("%f %f", &x3, &y3);
	printf("A distancia do ponto ao plano e:%.2f\n",distancia(x1,y1,x2,y2));
	printf("A area do triangulo e:%.2f",area(x1,y1,x2,y2,x3,y3));
}
float distancia(float x1, float y1, float x2, float y2)
{
	float L1, L2, distancia;
	L1 = pow(x2 - x1, 2);
	L2 = pow(y2 - y1, 2);
	distancia = sqrt(L1 + L2);
	return distancia;
}
float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float distancia1, distancia2, distancia3,SP,area;
	distancia1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	distancia2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	distancia3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	SP= distancia1+distancia2+distancia3/2;
	area=sqrt(SP*(SP-distancia1)*(SP-distancia2)*(SP-distancia3));
	return area;
}
