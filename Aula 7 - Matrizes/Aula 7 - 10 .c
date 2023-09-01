//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva uma matriz que lê uma matriz m(TAM,TAM) e a imprima para que o usuário possa conferi-lá.
Calcula e mostra as seguintes somas:
- da linha 4 de m
- da coluna 2 de m
- da diagonal Principal
- da diagonal secundária
- de todos os elementos da matriz.
*/

#define TAM 5

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[TAM][TAM], somaLIN4 = 0, somaCOL2 = 0, somaP = 0, somaS = 0, somaT = 0;//declaração de variaveis

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("Forneça o elemento m[%i][%i]:",i,j);
      scanf("%i",&m[i][j]);
    }
  }//for para pedir e armazenar os elementos da matriz

  printf("\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(i == 3) //se a linha tiver o valor 3 (4) ela incrementara a variável somaLIN4
      somaLIN4 += m[i][j];
      if(j == 1) //se a coluna tiver o valor (4) ela incrementara a variável somaLIN4
      somaCOL2 += m[i][j];
      if(i == j) //se o o elemento com o n° da linha forem iguais da coluna (diagonal principal) eles iram se somar
      somaS += m[i][j];
      if(i + j == 4) //se o elemento com o  n° da linha + coluna for 4 (diagonal secundária) eles iram se somar
      somaP += m[i][j];
        }
  }//for para a soma dos elementos da linha 4, coluna 2, diagonal principal e diagonal secundária

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      somaT += m[i][j];
      }
  }//for para a soma de todos os elementos

  printf("A matriz dada é: \n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%03i ",m[i][j]);
    }
    printf("\n");
  }//for para mostrar a matriz m

  printf("\n");

  printf("A soma da linha 4 é: %i \n",somaLIN4);//exibindo a soma da linha 4
  printf("A soma da coluna 2 é: %i \n",somaCOL2); //exibindo a sioma da coluna 2
  printf("A soma da diagonal principal é: %i \n",somaP); //exibindo a soma dda diagonal principal
  printf("A soma da diagonal secundária é: %i \n",somaS); //exibindo a soma da diagonal secundária
  printf("A soma de todos os elementos da matriz é: %i \n",somaT); //exibindo a soma de todos os elementos

  return 0;
}//main
