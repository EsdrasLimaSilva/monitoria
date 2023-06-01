/*
Questão 157

Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.
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
        int num = vetor[i];
        if (num == n)
            printf("%d ", i);
    }

    printf("\n");
}
