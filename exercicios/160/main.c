/*
Questão 160

Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.
*/
#include <stdio.h>

const int QUANTIDADE = 6;

int main()
{
    int vetor[QUANTIDADE];

    // lendo o vetor
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes: ");
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("%d ", vetor[i]);
    }

    // invertendo  o vetoror
    for (int k = 0; k < QUANTIDADE / 2; k++)
    {
        // pegar a posição a partir da dieita
        int i = QUANTIDADE - k - 1;

        int aux = vetor[k];
        vetor[k] = vetor[i];
        vetor[i] = aux;
    }

    printf("\nvetor depois: ");
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}
