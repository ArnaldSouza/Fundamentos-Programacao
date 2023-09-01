//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma função que receba uma matriz A contendo 5 linhas e 5 colunas e retorne a soma de seus elementos.*/

//função somaMatriz
float somaMatriz(float m[5][5]){
  float soma = 0;
  for(int i = 0; i < 5 ; i++){
    for (int j = 0; j < 5; j++) {
      soma += m[i][j]; //soma caca elemento da matriz com o anterior
    }//for j
  }//for i
  return soma; //retorna o valor final da soma
}//somaMatriz

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float mat[5][5], soma;//declaração de variaveis

  for(int i = 0; i < 5 ; i++){
    for (int j = 0; j < 5; j++) {
      printf("Forneca m[%i][%i]: ", i+1, j+1); //pede os valores da matriz
      scanf("%f",&mat[i][j]); //armazena os valores
    }//for i
  } //for j

  soma = somaMatriz(mat); //chama a função somaMAtriz e passa a matriz como parametro a ela

  printf("\n");
  printf("A soma de todos os elementos dessa matriz é: %.2f \n",soma); //exibe a soma dos elementos da matriz

  return 0;
}//main
