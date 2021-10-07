//brincando com o numero magico
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int numero, chute, tentativas = 0;
	numero = rand() % 500;
	printf("digite um numero\n");
	scanf("%d", &chute);
	while(chute >= -1)
	{
		tentativas += 1;
		if(chute < numero)
			printf("seu chute foi menor que o numero\n");
		else if(chute > numero)
			printf("seu chute foi maior que onumero\n");
		else if(tentativas <= 3)
			printf("sortudo\n");
		else if(tentativas >= 4 && tentativas <= 6)
			printf("sortudo\n");
		else if(tentativas >= 7 && tentativas <= 10)
			printf("normal\n");
		else
			printf("tente novamente\n");
		printf("digite um numero\n");
		scanf("%d", &chute);
	}
	return 0;
}
