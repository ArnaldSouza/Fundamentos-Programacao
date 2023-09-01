//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenonvolva um programa que leia uma matriz 6 x 6 e escreva quantos valores maiores
que N ela possui. Obs.: O valor de N ser�fornecido pelo usu�rio.  */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[6][6],n, cont = 0;//declara��o de variaveis

  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      printf("Forne�a o elemento ma[%i][%i]:",i,j); //pedindo os valores da matriz
      scanf("%i",&m[i][j]); //armazenando os valores da matriz
    }
  }

  printf("Qual o valor de N?\n"); //pedindo o valor de n
  scanf("%i",&n); ///armazenando o valor de n

  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      if(m[i][j] > n){ //se o valor for maior que n
        cont++; //ser� adicionado 1 a vari�vel cont
      } //comparando valroes que podem ser maiores q n
    }
  }

  if(cont > 0){ //se cont for maior que 0  ir� exibi-lo pois ele � a quantidade de n�mero maiores que n
    printf("A quantidade de numeros maiores que n �: %i \n",cont);
  }else{ //se cont n�o for alterado ele exibira que n�o existem numeros maiores que n
    printf("N�o h� n�meros maiores que n \n");
  }

  return 0;
}//main
