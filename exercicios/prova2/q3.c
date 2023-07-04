/*
Escreva um programa que leia uma matriz quadrada de ordem 100 de números reais e verifique quantas linhas nulas existem na matriz.
*/
#include<stdio.h>

const int ORDEM = 5;

int main(){
    float mat[ORDEM][ORDEM];

    //lendo a matriz
    for(int i = 0; i < ORDEM; i++){
         printf("\nLinha %d: \n", i);

        for(int j = 0; j < ORDEM; j++){

            printf("(%d, %d): ", i, j);
            scanf("%f", &mat[i][j]);

        }
    }

    int contador = 0;

    //verificando as linhas da matriz
    for(int i = 0; i < ORDEM; i++){
        int linhaNula = 1;

        for(int j = 0; j < ORDEM; j++){
            if(mat[i][j])
                linhaNula = 0;
        }

        if(linhaNula)
            contador++;
    }


    printf("Quantidade de linhas nulas: %d\n", contador);
}