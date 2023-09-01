//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que calcule o determinante de qualquer matriz 3 x 3 fornecida pelo
usuário. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[3][3], p, q, det;//declaração de variaveis

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Forneça o elemento m[%i][%i]:",i,j);
      scanf("%i",&m[i][j]);
    }
  } //pedindo a matriz

  p = m[0][0] * m[1][1] * m[2][2] + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1];
  //p é a soma das diagonais da esquerda para direita
  q = m[0][1] * m[1][0] * m[2][2] + m[0][0] * m[1][2] * m[2][1] + m[0][2] * m[1][1] * m[2][0];
  //q é a soma das diagonais da direita para a esquerda

  det = p - q; //calculo da det
  printf("A determinante desejada é: %i \n",det); //exibindo a determinante

  return 0;
}//main
