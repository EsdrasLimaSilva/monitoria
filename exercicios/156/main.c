/*
Questão 156

Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todos os elementos do vetor que são
maiores que N.
*/

#include <stdio.h>

const int QUANTIDADE = 10;

int main()
{
    int vetor[QUANTIDADE];

    // lendo o vetor
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &vetor[i]);
    }

    // coletano o n
    int n;
    printf("Informe o N: ");
    scanf("%d", &n);

    for (int i = 0; i < QUANTIDADE; i++)
    {
        int numPosicao = vetor[i];
        if (numPosicao > n)
            printf("%d ", numPosicao);
    }

    printf("\n");
}
