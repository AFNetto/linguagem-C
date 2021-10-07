//calcular a area de um poligono
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int quant_lados, lado, area;
	printf("digite o numero de lados do poligono\n");
		   printf(" 1 ( para triangulo )\n");
		   printf(" 2 ( para quadrado )\n");
		   printf(" 3 ( para hexagono )\n");
		   scanf("%d",&quant_lados);
		   switch(quant_lados)
		   {
		   case 1:
		   printf("digite o modulo do lado\n");
			   scanf("%d",&lado);
			    area= lado*lado*1.73/4;
	             printf("A area do poligono e:%f",area);
				   break;
				   case 2:
				   printf("digite o modulo do lado\n");
					   scanf("%d",&lado);
				   	    area= lado*lado;
	                      printf("A area do poligono e:%f",area);
						   break;
						   default:
						   printf("digite o modulo do lado\n");
							   scanf("%d",&lado);
							    area= 6*lado*lado*1.73/4;
	                             printf("A area do poligono e:%f",area);
								   break;
		   }
		   return 0;
}
