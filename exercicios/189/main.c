/*
Questão 189:
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é nula. 
*/

#include <stdio.h>

const int Q = 5;

void main() {
    float matriz[Q][Q];
    int i, j;
    for (i = 0; i < Q; i++) {
        for (j = 0; j < Q; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    int nula = 1;
    for (i = 0; i < Q; i++) {
        if (matriz[i][N] != 0) {
            nula = 0;
        }
    }
    
    if (nula == 1) {
        printf("A coluna %d da matriz eh nula!", N);
    } else {
        printf("A coluna %d da matriz nao eh nula!", N);
    }
    
    getch();
}
