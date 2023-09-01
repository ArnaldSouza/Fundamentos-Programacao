//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escrever um algoritmo que lê uma matriz m(5,5) e a escreva. Verifique, a seguir, quais
elementos de M que estão repetidos e quantas vezes cada um está repetido. Escrever cada
elemento repetido com uma mensagem dizendo que o elemento aparece X vezes em M */

#define TAM 3

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[TAM][TAM], repetido, repet = 0;//declaração de variaveis

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("Forneça o elemento m[%i][%i]: ",i,j);
      scanf("%i",&m[i][j]);
    }
  } //pede e armazena os elemetnos da matriz

  printf("A matriz fornecida é: \n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%i ",m[i][j]);
    }
    printf("\n");
  } //exibe os elementos da matriz

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      repetido = m[i][j];
    }
  } //iguala a variavel repetido aos elementos da matriz

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(repetido == m[i][j]){
       repet++;
      } //se a variavel for igual a um outro elemento da matriz incrementa repet em 1
    }
  }

  printf("O elemento %i está repetido e aparece %i vezes \n", repetido, repet);
  //mostrará o elemento que mais se repetiu e quantas vezes ele se repetiu

  return 0;
}//main
