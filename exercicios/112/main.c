/*
Questão 112

Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...)
*/
#include <stdio.h>

int main()
{
	int posicao;
	printf("Informe a posição do elemento na série: ");
	scanf("%d", &posicao);

	int anterior = 0, atual = 1;

	// andando na série de Fibonacci
	for (int i = 1; i < posicao; ++i)
	{
		int proximo = anterior + atual;

		anterior = atual;
		atual = proximo;
	}

	printf("o %d° elemento eh o %d\n", posicao, atual);
}
