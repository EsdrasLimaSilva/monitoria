/*
Questão 270

Escreva um subprograma recursivo que receba como entrada dois vetores de 10
números inteiros cada e um número inteiro N e verifique se os dois vetores são
idênticos a partir da posição N.
*/
#include<stdio.h>

int checarIdentitade(int vet1[], int vet2[], int pos, int tam){
    if(pos > tam)
        return 1;

    int num1 = vet1[pos-1];
    int num2 = vet2[pos-1];
    if(num1 != num2)
        return 0;

    return checarIdentitade(vet1, vet2, pos+1, tam);
}

int main(){
    int vet1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[] = {4, 4, 4, 5, 5, 6, 7, 8, 9, 10};

    int pos;
    printf("Informe a posicao: ");
    scanf("%d", &pos);

    int identicos = checarIdentitade(vet1, vet2, pos, 10);

    if(identicos)
        printf("Os vetores sao identios a partir da posicao %d\n", pos);
    else
        printf("Os NAO vetores sao identios a partir da posicao %d\n", pos);
}