//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Construa um programa que leia uma matriz 2x7. O programa devee� fazer uma busca
de um valor na matriz e, como resultado, escrever a localiza��o (linha, coluna) do elemento.
Caso o valor de N constar na matriz lida, o programa  dever� mostrar uma mensagem de "elemento
n�o encontrado". 
*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[2][7], n, linha = 0, coluna = 0, a = 0;//declara��o de variaveis

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
      } //se o elemento n for encontrado a passar� a valer 1 e armazenar� a linha e a coluna que ele est�
    }
  }

  if(a == 1){//se a for 1 ir� imprimir o numero n e sua posi��o
    printf("O n�mero n est� na linha %i e coluna %i",linha, coluna);
  }else{//se n�o ele ir� imprimir que o elemento n�o foi encontrado
    printf("O n�mero n n�o foi encontrado");
  }

  return 0;
}//main
