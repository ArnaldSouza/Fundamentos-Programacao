//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um programa que contenha uma matriz (3x3) de float.
Imprima o endere�o de casa posi��o dessa matriz */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float mat[3][3];//declara��o de variaveis
  float *pontmat = &mat[3][3];

  for(int i = 0; i < 3;i++){ //pede os elementos da matriz e os armazena
    for (int j = 0; j < 3; j++) {
      printf("Forne�a o [%i][%i] elemento: ", i, j);
      scanf("%f",&mat[i][j]);
    }
  }

  printf("\nMatriz:\n");
  for(int i = 0; i < 3; i++){ //
    for (int j = 0; j < 3; j++) {
      printf("%.2f ", mat[i][j]);
      }
      printf("\n");
  }

  printf("\n\nElementos e seus endere�os: \n");
  for(int i = 0; i < 3; i++){ //mostra os elementos da matriz e os seus respectivos endere�os
    for (int j = 0; j < 3; j++) {
      printf("Elemento [%i][%i] : %.2f : %i \n",i+1,j+1, mat[i][j], pontmat++);
      }
  }

  return 0;
}//main
