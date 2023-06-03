/*
Questão 169

Escreva um programa que leia um texto digitado pelo usuário até ler o caractere
enter, que não deve ser processado. O programa deve imprimir quantas vezes cada
letra foi digitada. (lembre-se, os caracteres ‘a’ e ‘A’) representam uma única letra. Se
você for usar a linguagem pascal, use o comando readkey para a leitura dos dados.
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

const int TAMANHO_TEXTO = 2000;

int main(){
    char texto[TAMANHO_TEXTO];

    printf("Digite um texto: \n");
    fgets(texto, TAMANHO_TEXTO, stdin);
    texto[strlen(texto) - 1] = '\0';


    char mat[127][2] = {{0}, {0}};

    for(int i = 0; i < (int)strlen(texto); i++){
        char caractere = texto[i];

        if(caractere >= 'A' && caractere <= 'Z')
            caractere += 32;

        bool caractereContado = false;
        int linha = 0;

        while(!caractereContado && caractere != ' '){
            /* Se o caractere na linha da matriz for igual ao caractere na posição i do texto */
            if(mat[linha][0] == caractere){

                mat[linha][1] += 1;
                caractereContado = true;

            } else if(mat[linha][1] == 0){
                /* Se a posição estiver vazia, significa que dali para frente não há mais caracteres */

                mat[linha][0] = caractere;
                mat[linha][1] += 1;
                caractereContado = true;

            }

            linha++;
        }

    }

    for(int linha = 0; linha < 127 && mat[linha][1]; linha++)
        printf("%c | %d\n", mat[linha][0], mat[linha][1]);
}