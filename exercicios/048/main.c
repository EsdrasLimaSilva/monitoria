/*
Questão 048

Uma financeira está oferecendo uma nova modalidade de empréstimo para os seus
clientes. Nesta modalidade, o cliente pode pagar o valor financiado em até 120
parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde
ao valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre
o valor total financiado. Com base nestas informações, escreva um programa que leia
um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o
valor de cada parcela e o valor total que o cliente pagará pelo empréstimo.

todas as parcelas possuem o mesmo valor

numero de parcelas N

valor de cada parcela = (valor do emprestimo / numero de parcelas) + (valor do emprestimo * 0.04)
total = valor de cada parcela * numero de parcelas;


------------ Exemplo ------------------

emprestimo = 12000
numeroDeParcelas = 5

valorParcela = 2400 + 480 = 2880
total = 14400

*/
#include <stdio.h>

int main()
{
	float valorEmprestimo;
	int numeroParcelas;

	printf("Informe o valor do emprestimo e o numero de parcelas: ");
	scanf("%f%d", &valorEmprestimo, &numeroParcelas);

	// calculando o valor de cada parcela
	float valorParcela = (valorEmprestimo / numeroParcelas) + (valorEmprestimo * 0.04);
	// calculando o valor total
	float total = numeroParcelas * valorParcela;

	printf("Valor da parcela: R$ %f\n", valorParcela);
	printf("Total: R$ %f\n\n", total);
}
