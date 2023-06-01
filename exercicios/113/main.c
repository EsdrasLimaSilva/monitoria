/*
Questão 113

Escreva um programa que leia dois números inteiros M e N e imprima todos os
números primos existentes no intervalo [M, N].
*/

#include <stdio.h>

int main()
{
	int min, max;
	printf("Informe um intervalo: ");
	scanf("%d%d", &min, &max);

	int i;
	// verificando para cada número no intervalo se ele é primo
	for (i = min; i <= max; ++i)
	{

		int contadorDivisores = 0;
		// verificando se o número é de fato primo
		for (int divisor = 1; divisor <= i; ++divisor)
		{
			int resto = i % divisor;
			if (resto == 0)
			{
				contadorDivisores += 1;
			}
		}

		if (contadorDivisores == 2)
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}
