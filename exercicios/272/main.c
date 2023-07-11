/*
Questao 272

Escreva um subprograma recursivo que receba como entrada um número inteiro n e um número inteiro positivo k e identifique o k-ésimo dígito do número n (da direita para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do subprograma deve ser o número 9.

123 / 10 = 12 (parte inteira) => 12 * 10 = 120 =>  123 - 120 = 3
*/
#include<stdio.h>

int kesimo(int num, int k){
    if(k == 1){
        int div = num / 10;
        int digito = num -(div * 10);
        return digito;
    }

    return kesimo(num/10, k-1);
}

int main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int k;
    printf("Informe o k: ");
    scanf("%d", &k);

    int digito = kesimo(num, k);

    printf("O %d digito de %d eh: %d\n", k, num, digito);
}