//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Construa um programa que entre com duas matrizes e com sua respectivas dimensões.
Em seguida, verifique se é possível fazer a multiplicação entre as matrizes. Caso seja
possível, calcule e exiba em tela o produto entre elas */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int  tal, tac, tbl, tbc;//declaração de variaveis

  printf("Qual o numero de linhas da matriz A:");
  scanf("%i",&tal);
  printf("Qual o numero de colunas da matriz A:");
  scanf("%i",&tac);
  printf("Qual o numero de linhas da matriz B:");
  scanf("%i",&tbl);
  printf("Qual o numero de colunas da matriz B:");
  scanf("%i",&tbc);
  //inforamndo o n° de linhas e colunas de a e b

  if(tac == tbl){ //se o numero de colunas de A for igual ao de linhas de B é possível fazer o produto
    int ma[tal][tac], mb[tbl][tbc], mc[tal][tbc]; //declaração das matrizes

    for(int i = 0; i < tal; i++){
      for(int j = 0; j < tac; j++){
        printf("Forneça o elemento ma[%i][%i]:",i,j);
        scanf("%i",&ma[i][j]);
      }
    } //pedindo a matriz A

    for(int i = 0; i < tbl; i++){
      for(int j = 0; j < tbc; j++){
        printf("Forneça o elemento mb[%i][%i]:",i,j);
        scanf("%i",&mb[i][j]);
      }
    } //pedindo a matriz B

    for(int i = 0; i < tal; i++){
      for(int j = 0; j < tbc; j++){
        mc[i][j]=0;
      }
    }//igualando a matriz c a zero

    for(int i = 0; i < tal; i++){
      for(int j = 0; j < tbc; j++){
          for(int k = 0; k < tbl; k++){
            mc[i][j] += ma[i][k] * mb[k][j];
          }
        }
    } //fazendo a matriz c com as condições


    for(int i = 0; i < tal; i++){
      for(int j = 0; j < tbc; j++){
          printf("%i ",mc[i][j]);
        }
        printf("\n");
    } //impriminndo a matriz c


  }else{//caso o numero de colunas de A for != do numero de linhas de B
    printf("Não é possível fazer o produto entre essas matrizes!!!\n");
  }

  return 0;
}//main
