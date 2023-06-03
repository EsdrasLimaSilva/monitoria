/*
O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome ´fim’, que não deve ser processado. O programa deve
imprimir também a pontuação média dos candidatos.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int QUESTOES = 5;

int main(void){
    char gabarito[QUESTOES];

    //lendo o gabarito
    for(int k = 0; k < QUESTOES; k++){
        printf("Resposta %d: ", k + 1);
        scanf("%c", &gabarito[k]);
        getchar();
    }


    char candidato[50];


    while(
        system("clear"),
        printf("Candidato: "),
        fgets(candidato, 50, stdin),
        candidato[strlen(candidato) - 1] = '\0',
        strcmp(candidato, "fim")
    ){

        int acertos = 0;

        for(int i = 0; i < QUESTOES; i++){
            printf("Resposta %d: ", i+1);
            char resposta = getchar();
            getchar();

            if(resposta == gabarito[i])
                acertos++;
        }


        printf("\n%s acertou %.1f%% das questoes\n", candidato, (float)acertos / QUESTOES * 100);
        getchar();

    }
}