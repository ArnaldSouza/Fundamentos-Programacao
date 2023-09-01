//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Na teoria de Sistemas define-se elemento minimax de uma matriz,
o minmax elemento da linha em que se encontra o maior elemento
da matriz. Escrever um algoritmo que lê uma matriz 5 por 5 (5x5) e
determine o elemento minimax desta matriz, escrevendo-o e a
posição na matriz em que ele se encontra */

#define TAM 5

//função main
int main(){


  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[TAM][TAM], maior = 0, linha, minmax = 10000 , coluna; //declaração de variaveis
                                //menor da linha do maior da matriz
  for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM;j++){
      printf("Forneca m[%i][%i]: ", i, j);
      scanf("%i",&m[i][j]);
    }
  }//pedindo informações da matriz

  for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM;j++){
      if(m[i][j] > maior){
        maior = m[i][j];
        linha = i;
      }//procurando o maior numero da matriz e aramazenando a linha em que ele está
    }
  }

  for(int k=0;k<TAM;k++){
    if(m[linha][k] < minmax){
      minmax = m[linha][k];
      coluna = k;
    }//procurando qual o minmax elemento da linha armazenada
  }

  printf("O elemento minmax é: %i que está na linha %i e coluna %i  \n",minmax, linha, coluna);
  //exibindo quais o elemento minmax e sua posição

  return 0;
}//main
