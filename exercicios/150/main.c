/*
Escreva um programa que leia dois números inteiros positivos N e M e use o método
das aproximações sucessivas de Newton para determinar a raiz enésima de M. De
acordo com o método de Newton, são calculados diversos elementos xk, de acordo
com as equações abaixo. Inicialmente, deve ser calculado o valor de x1. Se for
necessário, devem ser calculados os valores de x2, x3 e assim sucessivamente. O
cálculo dos números deve ser encerrado quando for gerado um valor xk de forma que
o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a
precisão desejada. Quando isso acontece, o último xk gerado corresponde ao valor da
raiz. Para calcular a raiz, considere x0 = 1 e a precisão de 0,0001.

===> ver as fórmulas na lista!
*/

#include <stdio.h>
#include <math.h>

const int X0 = 1;
const double precisao = 0.00001;

int main()
{

    int indice, radicando;
    printf("Informe o indice e o radicando: ");
    // coletando o índice e radicando
    scanf("%d%d", &indice, &radicando);

    // primeiro cálculo da possível raiz

    /*
    fórmulas:

    x² => x^2

    f(x) = X^N - M
    f'(x) = N * x^(n - 1)

    xAtual = xAnterior - (f(xAnterior) / f'(xAnterior));
    */
    double xAnterior = X0;

    double numerador = pow(xAnterior, indice) - radicando;
    double denominador = indice * pow(xAnterior, indice - 1);

    // valor aproximado da raiz
    double xAtual = xAnterior - (numerador / denominador);

    double diferenca = fabs(xAtual - xAnterior);

    while (diferenca > precisao)
    {
        xAnterior = xAtual;

        numerador = pow(xAnterior, indice) - radicando;
        denominador = indice * pow(xAnterior, indice - 1);

        // valor aproximado da raiz
        xAtual = xAnterior - (numerador / denominador);

        diferenca = fabs(xAtual - xAnterior);
    }

    printf("A raiz %d de %d eh %f\n", indice, radicando, xAtual);
}
