#include <stdio.h>
#include <stdlib.h>
int main()
{
	float numero=1, numerador=1;
	float pi=0;
	while(4/numerador > 0.0001)
	{
		pi += numero*4/numerador;
		numerador += 2;
		numero *= -1;
	}
	printf("%f", pi);
	return 0;
}