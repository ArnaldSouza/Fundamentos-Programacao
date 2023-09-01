//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia uma matriz quadrada de inteiros com dimensão de 3x3 e
verifique se ela é simétrica em relação à diagonal principal.
Exemplos para teste */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[3][3];//declaração de variaveis

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("Forneca m[%i][%i]: ", i, j);
      scanf("%i",&m[i][j]);
    }
  } //matriz de 3x3

  if(m[0][1] == m[1][0] && m[0][2] == m[2][0] && m[1][2] == m[2][1]){ //verificação se os lados de numeros invertidos são iguais
    printf("A matriz é simétrica em relação a matriz principal \n"); //imprime se a matriz for simétrica
  }

  return 0;
}//main
