/*
Questão 120

Escreva um programa que leia um número inteiro positivo N e imprima a maior
quantidade possível de números inteiros positivos de forma que a soma de todos os
números impressos seja menor ou igual a N.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Informe a quantidade máxima de números inteiros: ");
    scanf("%d", &n);

    int num = 1;
    int soma = 1;

    while (soma <= n)
    {
        printf("%d ", num);
        num++;
        soma += num;
    }

    printf("\n");
}
