/*
Questão 094

Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das cédulas maiores.
*/

#include<stdio.h>

int main(){
    int saque;
    printf("Informe o valor do saque: ");
    scanf("%d", &saque);

    if(saque <= 1000){
	int cedulas100 = saque / 100;//numero de cédula
	saque = saque % 100;

	int cedulas50 = saque / 50;
	saque = saque % 50;
	
	int cedulas20 = saque / 20;
	saque = saque % 20;

	int cedulas10 = saque / 10;
	saque = saque % 10;

	
	printf("Notas de 100: %d\n", cedulas100);
	printf("Notas de 50: %d\n", cedulas50);
	printf("Notas de 20: %d\n", cedulas20);
	printf("Notas de 10: %d\n", cedulas10);
	printf("Resto: %d\n", saque);

    } else {
	printf("O saque deve ser inferior a R$ 1000,00\n");
    }
		  
}
