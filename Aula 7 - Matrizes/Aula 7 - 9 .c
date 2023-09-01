//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenonvolva um programa que leia uma matriz 6 x 6 e escreva quantos valores maiores
que N ela possui. Obs.: O valor de N seráfornecido pelo usuário.  */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[6][6],n, cont = 0;//declaração de variaveis

  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      printf("Forneça o elemento ma[%i][%i]:",i,j); //pedindo os valores da matriz
      scanf("%i",&m[i][j]); //armazenando os valores da matriz
    }
  }

  printf("Qual o valor de N?\n"); //pedindo o valor de n
  scanf("%i",&n); ///armazenando o valor de n

  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      if(m[i][j] > n){ //se o valor for maior que n
        cont++; //será adicionado 1 a variável cont
      } //comparando valroes que podem ser maiores q n
    }
  }

  if(cont > 0){ //se cont for maior que 0  irá exibi-lo pois ele é a quantidade de número maiores que n
    printf("A quantidade de numeros maiores que n é: %i \n",cont);
  }else{ //se cont não for alterado ele exibira que não existem numeros maiores que n
    printf("Não há números maiores que n \n");
  }

  return 0;
}//main
