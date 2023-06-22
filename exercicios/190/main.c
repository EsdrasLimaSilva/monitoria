/*
Questão 190:
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e verifique quantas linhas nulas existem na matriz.  
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
    
    int linhas_nulas = 0;
    for (i = 0; i < Q; i++) {
        // essa coluna eh inicialmente nula
        int eh_nula = 1;
        
        for (j = 0; j < Q; j++) {
            if (matriz[i][j] != 0) {
                eh_nula = 0;
            }
        }
        
        if (eh_nula == 1) {
            linhas_nulas++;
        }
    }
    
    printf("Existem %d linhas nulas na matriz", linhas_nulas);
    
    getch();
}
