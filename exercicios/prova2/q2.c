/*
O IFPB precisa de um programa que faça a correção automática das provas do seu teste de seleção.

A prova, que é a mesma para todos os alunos, consiste de dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que deve ser escrito na linguagem C, deve ler o gabarito da prova e, a seguir, as opções que aparecem no cartão de respostas de um candidato.

O cálculo da pontuação deve ser feito utilizando-se um comando de repetição. Depois disso, o programa deve imprimir o número de questões que o candidato acertou.
*/
#include<stdio.h>

const int QUESTOES = 10;

int main(){
    char gabarito[QUESTOES], prova[QUESTOES];

    //lendo o gabarito
    for(int i = 0; i < QUESTOES; i++){
            printf("Gabarito | questão %d: ", i+1);
            scanf("%c", &gabarito[i]);
            getchar();
    }

    puts("--------------------------------");

    for(int i = 0; i < QUESTOES; i++){
            printf("Prova | questão %d: ", i+1);
            scanf("%c", &prova[i]);
            getchar();
    }


    int contador = 0;
    //lendo a prova
    for(int i = 0; i < QUESTOES; i++){
        if(gabarito[i] == prova[i])
            contador++;
    }

    printf("O aluno acertou %d questoes\n", contador);
}