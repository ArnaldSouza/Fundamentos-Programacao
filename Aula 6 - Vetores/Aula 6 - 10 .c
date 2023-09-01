//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um algoritmo que leia e mostre um vetor de 10 números
inteiros. A seguir, conte quantos valores pares existem no vetor*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], par = 0;//declaração de variaveis

  for(int i = 0; i < 10 ; i++){
    printf("Qual %iº o valor para o vetor :", i+1);
    scanf("%i",&vet[i]);
  } //vetor

  for(int i = 0; i < 10 ; i++){
    if(vet[i] % 2 == 0){ //se o numero contido no vetor divir por 2 e der resto 0, ele é par
      par++; //sempre que o numero for par soma 1
    }
  }

  for(int i = 0; i < 10 ; i++){
    printf("O %i º valor do vetor é: %i \n", i+1, vet[i]); //mostrando os valores do vetor
  }

  printf("O número de pares é: %i\n",par); //imprimindo os numeros pares

  return 0;
}//main
