/*
Questão 191:
Escreva um programa que leia duas matrizes quadradas de ordem 5 de números  reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas. 
*/

#include <stdio.h>

const int Q = 5;

void main() {
    float matriz1[Q][Q], matriz2[Q][Q], matriz_soma[Q][Q];
    
    int i, j;
    
    // lendo primeira matriz
    for (i = 0; i < Q; i++) {
        for (j = 0; j < Q; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }
    
    // lendo segunda matriz
    for (i = 0; i < Q; i++) {
        for (j = 0; j < Q; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }
    
    printf("Matriz correspondente a soma das duas matrizes lidas:\n");
    for (i = 0; i < Q; i++) {
        for (j = 0; j < Q; j++) {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%.2f ", matriz_soma[i][j]);
        }
        printf("\n");
    }
    
    getch();
}

