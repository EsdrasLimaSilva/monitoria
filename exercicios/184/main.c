/*
Questão 184:
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos elementos da coluna N. 
*/

#include <stdio.h>

const int Q = 5;

void main() {
    // leitura
    float matriz[Q][Q];
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor da posicao %dx%d da matriz: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    
    float soma = 0;
    for (i = 0; i < 5; i++) {
        soma += matriz[i][N];
    }
    
    float media = soma / Q;
    printf("A media aritmetica de todos os elementos da coluna N eh: %.2f", media);
    
    getch();
}

