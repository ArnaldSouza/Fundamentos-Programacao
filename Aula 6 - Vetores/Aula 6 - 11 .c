//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que leia 10 valores inteiros e armazene em um
vetor A. Inverta ent�o os valores de A. Troque o primeiro pelo
�ltimo, segundo pelo pen�ltimo e assim por diante. Mostre o vetor
 ap�s as altera��es. */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], aux;//declara��o de variaveis

  for(int i = 0; i < 10 ; i++){
    printf("Qual %i� o valor para o vetor :", i + 1);
    scanf("%i",&vet[i]);
  } //vetor

  for(int i = 0; i < 5; i++){
    aux = vet[9-i];
    vet[9-i] = vet[i];
    vet[i] = aux;
  }//invertendo as posi��es

  for(int i = 0; i < 10; i++){
    printf("%i ",vet[i]);
  }//imprimindo o vetor invertido

  return 0;
}//main
