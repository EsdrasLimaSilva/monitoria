/*
Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório,
o médico atende os seus pacientes de acordo com a ordem em que eles chegaram
(cada paciente recebe uma senha com o número da sua ordem de chegada) e cada
consulta demora exatamente 25 minutos.

Com base nestas informações, escreva um programa que leia um número inteiro correspondendo à hora e outro correspondendo aos minutos em que Ana chegou ao consultório e o número da senha que ela rec beu e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao
consultório no exato momento em que o médico ia atender o paciente que recebeu a
senha 1.

tempo de consulta = 25 minutos;
paciente = tempo de consulta * n;

3 * 25 = 75min;

paciente 1 = 0;
paciente 2 = 25min;
paciente 3 = 50min;
...
paciente n = (n - 1) * 25min;

-----------------------

hora = xx
minutos = yy

11:50
11:61 -> 12:01

tempoEspera = t;

minutos = minutos + t;

11:00 -> 11:25

11:45 -> +25minutos -> 11:45 + 25 -> 11:70 -> 12:10
*/

#include<stdio.h>

int main(){
	int horas, minutos, senha;

	//coletando a hora de chegada
	printf("Informe as horas: ");
	scanf("%d", &horas);

	//coletando os minutos de chegada
	printf("Informe os minutos de chegada: ");
	scanf("%d", &minutos);

	//coletando
	printf("Informe a senha: ");
	scanf("%d", &senha);


	//calculando o tempo de espera
	int tempoDeEspera = (senha - 1) * 25;

	//11:00 -> senha = 2 -> 11:25
	minutos = minutos +  tempoDeEspera;
	//calculando as horas adicinais
	int horasAdicionais = minutos / 60;//as horas adicionais
	horas = horas + horasAdicionais;
	//retirando o excesso de minutos
	minutos = minutos % 60;

	printf("Ana sera atendida as %02d:%02dh\n", horas, minutos);
}
