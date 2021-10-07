#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int vetor_mat[100],aux1;
	char vetor_aluno[100],aux;
	int j, i, l, N, k, m;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o numero de posições para o vetor (com no maximo 100 posições)\n");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		printf("Digite o nome do aluno\n");
		scanf("%c", &vetor_aluno[i]);
	}
	for(k = 0; k < N; k++)
	{
		printf("Digite a matricula do aluno\n");
		scanf("%d", &vetor_mat[i]);
	}
	for(j = 0; j < N; j++)
	{
   for(l = 0; l < N; l++)
   {
				if(vetor_aluno[i] > vetor_aluno[i + 1])
				{
					aux = vetor_aluno[i];
					vetor_aluno[i] = vetor_aluno[i + 1];
					vetor_aluno[i + 1] = vetor_aluno[i];

					aux1 = vetor_mat[i];
					vetor_mat[i] = vetor_mat[i + 1];
					vetor_mat[i + 1] = vetor_mat[i];
				}


			}
		}
	for(m = 0; m < N; m++)
	{
		printf("%c", vetor_aluno[m]);
		printf("%d", vetor_mat[m]);
	}
	return 0;
}
// Fernando,meu Falcon de erro de compilação nesse programa,não sei o que ocorreu,e não consigo rodar o código,espero que nao ocorra na correção
