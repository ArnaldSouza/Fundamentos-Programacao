//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva uma matriz que l� uma matriz m(TAM,TAM) e a imprima para que o usu�rio possa conferi-l�.
Calcula e mostra as seguintes somas:
- da linha 4 de m
- da coluna 2 de m
- da diagonal Principal
- da diagonal secund�ria
- de todos os elementos da matriz.
*/

#define TAM 5

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[TAM][TAM], somaLIN4 = 0, somaCOL2 = 0, somaP = 0, somaS = 0, somaT = 0;//declara��o de variaveis

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("Forne�a o elemento m[%i][%i]:",i,j);
      scanf("%i",&m[i][j]);
    }
  }//for para pedir e armazenar os elementos da matriz

  printf("\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(i == 3) //se a linha tiver o valor 3 (4) ela incrementara a vari�vel somaLIN4
      somaLIN4 += m[i][j];
      if(j == 1) //se a coluna tiver o valor (4) ela incrementara a vari�vel somaLIN4
      somaCOL2 += m[i][j];
      if(i == j) //se o o elemento com o n� da linha forem iguais da coluna (diagonal principal) eles iram se somar
      somaS += m[i][j];
      if(i + j == 4) //se o elemento com o  n� da linha + coluna for 4 (diagonal secund�ria) eles iram se somar
      somaP += m[i][j];
        }
  }//for para a soma dos elementos da linha 4, coluna 2, diagonal principal e diagonal secund�ria

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      somaT += m[i][j];
      }
  }//for para a soma de todos os elementos

  printf("A matriz dada �: \n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%03i ",m[i][j]);
    }
    printf("\n");
  }//for para mostrar a matriz m

  printf("\n");

  printf("A soma da linha 4 �: %i \n",somaLIN4);//exibindo a soma da linha 4
  printf("A soma da coluna 2 �: %i \n",somaCOL2); //exibindo a sioma da coluna 2
  printf("A soma da diagonal principal �: %i \n",somaP); //exibindo a soma dda diagonal principal
  printf("A soma da diagonal secund�ria �: %i \n",somaS); //exibindo a soma da diagonal secund�ria
  printf("A soma de todos os elementos da matriz �: %i \n",somaT); //exibindo a soma de todos os elementos

  return 0;
}//main
