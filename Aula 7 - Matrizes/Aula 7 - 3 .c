//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia uma matriz quadrada de inteiros com dimens�o de 3x3 e
verifique se ela � sim�trica em rela��o � diagonal principal.
Exemplos para teste */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[3][3];//declara��o de variaveis

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("Forneca m[%i][%i]: ", i, j);
      scanf("%i",&m[i][j]);
    }
  } //matriz de 3x3

  if(m[0][1] == m[1][0] && m[0][2] == m[2][0] && m[1][2] == m[2][1]){ //verifica��o se os lados de numeros invertidos s�o iguais
    printf("A matriz � sim�trica em rela��o a matriz principal \n"); //imprime se a matriz for sim�trica
  }

  return 0;
}//main
