/*
Questão 128

Escreva um programa que leia o nome e o peso de 20 bois que participam de uma
exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso,
suponha que todos os bois têm pesos distintos.
*/

#include<stdio.h>
#include<string.h>

const int QUANTIDADE = 4;

int main(){
	//dados do boi mais pesado
	char nomeBoiPesado[50]; 
	float pesoBoiPesado;
	
	//dados do boi mais leve
	char nomeBoiLeve[50];
	float pesoBoiLeve;

	for(int i = 1; i <= QUANTIDADE; ++i ){
		//dados do boi sendo analizado atualmente
		char nomeBoi[50];
		float pesoBoi;
		
		printf("Informe o nome do boi: ");
		fgets(nomeBoi, 50, stdin ); //\n
		//resolver o problema da quebra de linha com fgets
		nomeBoi[strlen(nomeBoi) - 1] = '\0';
		
		printf("Informe o peso do boi: ");
		scanf("%f", &pesoBoi);
		getchar();

		printf("\n");

		if(i == 1){//é o primeiro boi
			strcpy(nomeBoiPesado, nomeBoi);
			strcpy(nomeBoiLeve, nomeBoi);
			pesoBoiPesado = pesoBoiLeve = pesoBoi;

		} else {//segundo boi em diante
	
			if(pesoBoi > pesoBoiPesado){//peso maior que o mais pesado
				
				strcpy(nomeBoiPesado, nomeBoi);
				pesoBoiPesado = pesoBoi;

			} else if(pesoBoi < pesoBoiLeve){//peso inferior ao boi mais leve
				strcpy(nomeBoiLeve, nomeBoi);
				pesoBoiLeve = pesoBoi;
			}

		}
	}

	printf("Boi mais pesado: Nome: %s | Peso: %f\n", nomeBoiPesado, pesoBoiPesado);
	printf("Boi mais leve: Nome: %s | Peso: %f\n", nomeBoiLeve, pesoBoiLeve);
	printf("\n");
}


