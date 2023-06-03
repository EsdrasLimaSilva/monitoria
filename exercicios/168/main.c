/*
Questão 168

Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados
e gere um terceiro vetor também ordenado contendo todos os elementos dos dois
vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as
repetições.
*/

#include<stdio.h>
#include<stdlib.h>

const int TAMANHO = 5;

int main(){
    int vetA[TAMANHO], vetB[TAMANHO];

    //lendo o vetor A
    for(int i = 0; i < TAMANHO; i++) {
        printf("Vet A, pos %d: ", i);
        scanf("%d", &vetA[i]);
    }

    system("clear");

    //lendo o vetor B
    for(int i = 0; i < TAMANHO; i++) {
        printf("Vet B, pos %d: ", i);
        scanf("%d", &vetB[i]);
    }

    int vetC[TAMANHO * 2];

    //preenchendo o vetor C
    for(int i = 0; i < TAMANHO * 2; i++){
        if(i <= 4)
            vetC[i] = vetA[i];
        else
            vetC[i] = vetB[i - 5];
    }

    system("clear");

    //mostrando o vetor C
    for(int i = 0; i < TAMANHO * 2; i++)
        printf("%d ", vetC[i]);
    
    printf("\n");
}