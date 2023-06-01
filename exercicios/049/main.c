/*
Questão 049

Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta
revendedora, o preço de um veículo é calculado através do seu preço de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações,
escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o
seu preço na promoção.

Preco = 1x + 0.20x + 0.17x + 0.20x;

informe um preço: Y

----- descobrindo o valor de x ---------

Preco = 1.57x;
x = Preco/1.57;

valorIPI = 0.20x;

Preco - valorIPI => precoNaPromocao;

----------- Exemplo ------------

carro = 70.000


precoFabrica = 70000 / 1.57 => R$ 44.585,98;


valorIPI = 44585,90 * 0.20 => R$ 8918,19;

precoPromocao = 70.000  - 8918,19 => R$ 61081.81
*/

#include<stdio.h>

int main(){
	float precoVenda;

	//coletando o preço de venda do veículo
	printf("Informe o preço de venda: ");
	scanf("%f", &precoVenda);

	//calculando o preço de fábrica do veículo
	float precoFabrica = precoVenda / 1.57;

	//calculando o valor absoluto do IPI
	float valorIPI = 0.20 * precoFabrica;

	//calculando o valor do preço na promoção
	float precoPromocao = precoVenda - valorIPI;

	//mostrando para o usuário
	printf("O preço na promoção será de R$ %f\n", precoPromocao);



}
