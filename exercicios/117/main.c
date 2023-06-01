/*
Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o
seu fatorial.
*/
#include<stdio.h>

const int QUANTIDADE_NUMEROS = 5;

int main(){
	
	//controla a contagem de quantos número tiveram seu fatorial calculado	
	for(int i = 1; i <= QUANTIDADE_NUMEROS; i++){
		int numero;
		printf("Informe um numero inteiro: ");
		scanf("%d", &numero);

		int resultado = 1; // inicializamos com 1 pois 1 * n = n
			
		//calculando o fatorial
		for( int j = numero; j >= 1; --j){
			resultado = resultado * j; //resultado *= j
		}

		printf("O fatorial de %d eh %d\n", numero, resultado);
	}
}
