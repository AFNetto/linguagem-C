#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a, b, c;
	int delta, x1, x2;
	printf("digite o coeficiente a\n");
	scanf("%d",&a);
	printf("digite o coeficiente b\n");
	scanf("%d",&b);
	printf("digite o coeficiente b\n");
	scanf("%d",&c);
	while(a != 0)
	{
		delta = pow(b, 2) - ( 4 * a * c);
		if(delta < 0)
			printf("a equacao nao tem raizes\n");
		else if (delta == 0)
		{
			x1 = (-1 * b + delta) / 2 * a;
			printf("a equacao tem apenas uma raiz;%d", x1);
		}
		else
		{
			x1 = (-1 * b + delta) / 2 * a;
			x2 = (-1 * b - delta) / 2 * a;
			printf("As raizes da equacao sao: %d\n", x1);
			printf("%d", x2);
		}
		printf("\ncaso deseje parar digite o coeficiente a como 0\n");-
			   printf("\n digite o coeficiente a\n");
			   scanf("%d",&a);
			   if(a==0)
			   	printf("Ate logo\n");
			   printf("digite o coeficiente b\n");
			   scanf("%d",&b);
			   printf("digite o coeficiente b\n");
			   scanf("%d",&c);
		   }
			   return 0;
		   }
