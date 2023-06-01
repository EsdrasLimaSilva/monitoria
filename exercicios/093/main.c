/*
Questão 093

Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
o número lido é ou não um palíndromo.
*/

#include<stdio.h>

int main(){
  int numero;
  printf("Informe um numero entre 1000 e 9999: ");
  scanf("%d", &numero);

  if(numero >= 1000 && numero <= 9999){
  
    int milhar = numero / 1000; // inteiro / inteiro -> inteiro (1.991 => 1)
    int centena = (numero % 1000) / 100;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;

   //1885 
    if(milhar == unidade &&  centena == dezena){//numero eh palindromo
     printf("O numero %d eh palindromo\n", numero);
    } else {
      printf("O numero %d nao eh palindromo\n", numero);
    }

  } else {
    printf("Numero invalido\n");
  }

}
