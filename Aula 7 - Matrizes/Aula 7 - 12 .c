//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Receba uma matriz m(5,5) do usuário então troque os elementos da primeira linha, com os
elementos da terceira linha */

#define TAM 5

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[TAM][TAM], aux;//declaração de variaveis

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("Forneça o elemento m[%i][%i]: ",i,j);
      scanf("%i",&m[i][j]);
    }
  } //pede e armazena os elementos da matriz

  printf("\n");
  printf("A matriz fornecida é: \n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%03i ",m[i][j]);
    }
    printf("\n");
  } //exibe os elementos da matriz

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      aux = m[0][j]; //aux passa a valer a linha 1
      m[0][j] = m[2][j]; //a linha 1 passa a valer a linha 3
      m[2][j] = aux; //a linha 3 tem os valores de aux, que é a linha 1
    }
  }

  printf("\n");
  printf("A matriz com as linha trocadas é: \n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%03i ",m[i][j]);
    }
    printf("\n");
  } //exibe os elementos da matriz com a linha "0" (1) passando a ser a linha "2" (3)

  return 0;
}//main
