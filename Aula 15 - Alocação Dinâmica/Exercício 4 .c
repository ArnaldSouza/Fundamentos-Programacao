//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Escreva uma fun��o que receba como par�metro um valor L e um valor C e retorne o ponteiro para uma matriz
alocada dinamicamente contendo L linhas e C colunas. Essa matriz deve ser inicializada com o valor zero em
todas as suas posi��es. */

int criaMatriz(int linha, int coluna){
  int **matriz;

  matriz = (int*) malloc (coluna * sizeof(int)); //aoca��o dinamica

  for (int i = 0; i < linha; i++) { //define a matriz
    matriz[i] = (int*) malloc (linha * sizeof(int));
  }//for

  return matriz;
}

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int **matriz;//declara��o de variaveis
  int l, c;

  printf("Digite o n�mero de linhas:"); //pede o numero de linhas e colunas e os armazena
  scanf("%i",&l);
  printf("Digite o n�mero de colunas:");
  scanf("%i",&c);

  matriz = criaMatriz(l,c); //iguala a fun��o criaMatriz ao ponteiro matriz

  printf("\n MATRIZ: \n"); //exibe a matriz
  for (int i = 0; i < l; i++) {
    for(int j = 0; j < c; j++){
      matriz[i][j] = 0;
      printf(" %i", matriz[i][j]);
    }
    printf("\n");
  }

  free(matriz); //desaloca  o arquivo descrito

  return 0;
}//main
