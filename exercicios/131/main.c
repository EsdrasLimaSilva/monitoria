/*
Questão 131

Escreva um programa que leia 10 números reais distintos e calcule o segundo maior
número lido.
 */
#include<stdio.h>

const int QUANTIDADE = 5;
int main(){
	float maior, segMaior;
	//5 4
	//5 4 "7"

	for(int k = 1; k <= 5; k++){
		float num;
		printf("Informe um numero: ");
		scanf("%f", &num);

		if(k == 1){//primeiro numero
			maior = segMaior = num;
		} else {
			if(num > maior){
				float aux = maior;
				maior = num;
				segMaior = aux;
			} else if(num > segMaior){
				segMaior = num;
			}
		}
	}

	printf("Segundo maior: %f\n", segMaior);
}
