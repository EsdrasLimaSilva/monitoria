/*
Questão 269

Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum
número primo a partir da posição N do vetor.
*/
#include<stdio.h>
#include<math.h>

int checarPrimo(int num){
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0) return 0;
    
    return 1;
}

int primoNoVetor(int vet[], int pos, int tam){
    if(pos > tam)
        return 0;

    int num = vet[pos-1];
    int ehPrimo = checarPrimo(num);

    if(ehPrimo)
        return 1;
    
    return primoNoVetor(vet, pos+1, tam);
}


int main(){
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int pos;
    printf("Informe a posicao: ");
    scanf("%d", &pos);

    int haPrimo = primoNoVetor(vet, pos, 10);

    if(haPrimo)
        printf("Ha pelo menos um primo no vetor a partir da posicao %d\n", pos);
    else
        printf("NAO ha primos no vetor!\n");
}