#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void duracao (int, int, int, int, int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int hi, mi, hf, mf, H, M, op;
	printf("\n Nessa ordem, digite hora e minuto de início de jogo. ");
	scanf("%d %d", &hi, &mi);
	if (hi < 12)
	{
		printf("\n Você digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se você tiver inserido um horário do período da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mi >= 60) 
	{
		printf("\n Você digitou minutos inválidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	printf("\n Com isso, digite agora a hora e minuto do final do jogo. ");
	scanf("%d %d", &hf, &mf); 
	if (hf < 12)
	{
		printf("\n Você digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se você tiver inserido um horário do período da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mf >= 60)
	{
		printf("\n Você digitou minutos inválidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	duracao(hi, mi, hf, mf, &H, &M);
	printf("\n O jogo durou %d hora(s) e %d minuto(s).", H, M);
	return 0;
}
void duracao(int h1, int m1, int h2, int m2, int *dh, int *dm) 
{
	int op;
	*dh = h2 - h1;
	*dm = m2 - m1;
	if (*dh < 0) 
		*dh = (24 - h1) + h2;
	else if (*dh == 0) 
	{
		printf("\n O jogo durou 24h? Se sim, digite 1\n ");
		scanf("%d", &op);
		if (op == 1)
			*dh += 24;
	}
	if (*dm < 0)
		*dm = (60 - m1) + m2;
}