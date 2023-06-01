/*
Questão 118

Escreva um programa que leia um número N e imprima os N primeiros números
primos positivos.

2 3 4 5 6
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Informe a quantidade de primos: ");
    scanf("%d", &n);

    int num = 1;
    int contador = 0;

    while (contador < n)
    {

        int divisores = 0;

        for (int divisor = 1; divisor <= num; divisor++)
        {

            if (num % divisor == 0)
                divisores++;
        }

        if (divisores == 2)
        {
            printf("%d ", num);
            contador++;
        }

        num++;
    }

    printf("\n");
}
