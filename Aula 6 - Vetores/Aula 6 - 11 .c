//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que leia 10 valores inteiros e armazene em um
vetor A. Inverta então os valores de A. Troque o primeiro pelo
último, segundo pelo penúltimo e assim por diante. Mostre o vetor
 após as alterações. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], aux;//declaração de variaveis

  for(int i = 0; i < 10 ; i++){
    printf("Qual %iº o valor para o vetor :", i + 1);
    scanf("%i",&vet[i]);
  } //vetor

  for(int i = 0; i < 5; i++){
    aux = vet[9-i];
    vet[9-i] = vet[i];
    vet[i] = aux;
  }//invertendo as posições

  for(int i = 0; i < 10; i++){
    printf("%i ",vet[i]);
  }//imprimindo o vetor invertido

  return 0;
}//main
