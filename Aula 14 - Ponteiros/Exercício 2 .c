//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um programa que contenha um vetor float (tamanho 10). Imprima o endere�o de cada posi��o desse vetor */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float vet[10]; //declara��o de variaveis
  float *pontvet = &vet[10];

  for(int i = 0; i < 10; i++){ //pede os elemetnos do vetor e os armazena
    printf("Forne�a o %i� elemento: ", i + 1);
    scanf("%f",&vet[i]);
  }

  printf("Vetor:\n"); //exibe os elemetnos do vetor
  for(int i = 0; i < 10; i++){
    printf("%.2f ",vet[i]);
  }

  printf("\nEndere�os:\n");
  for(int i = 0; i < 10; i++){ //mostra os elementos do vetor e os seus respectivos endere�os
    printf("%i : %.2f : %i \n",i+1, vet[i], pontvet++);
  }

  return 0;
}//main
