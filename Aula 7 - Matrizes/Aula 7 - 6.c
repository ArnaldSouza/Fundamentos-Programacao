//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Construa um programa que leia uma matriz 2x7. O programa deveeá fazer uma busca
de um valor na matriz e, como resultado, escrever a localização (linha, coluna) do elemento.
Caso o valor de N constar na matriz lida, o programa  deverá mostrar uma mensagem de "elemento
não encontrado". 
*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[2][7], n, linha = 0, coluna = 0, a = 0;//declaração de variaveis

  for(int i = 0; i < 2;i++){
    for(int j = 0; j < 7;j++){
      printf("Forneca m[%i][%i]: ", i, j);
      scanf("%i",&m[i][j]);
    }
  }//pedindo valores da matriz

  printf("Forneca o elemento n: "); //pedindo o elemento
  scanf("%i",&n); //armazenando elemento n

  for(int i = 0; i < 2;i++){
    for(int j = 0; j < 7;j++){
      if(n == m[i][j]){
        linha = i;
        coluna = j;
        a = 1;
      } //se o elemento n for encontrado a passará a valer 1 e armazenará a linha e a coluna que ele está
    }
  }

  if(a == 1){//se a for 1 irá imprimir o numero n e sua posição
    printf("O número n está na linha %i e coluna %i",linha, coluna);
  }else{//se não ele irá imprimir que o elemento não foi encontrado
    printf("O número n não foi encontrado");
  }

  return 0;
}//main
