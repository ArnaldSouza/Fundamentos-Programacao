//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um fução que calcule e retorne o número neperiano e
e=2,71828183, usando a série a seguir:
  e = SOMATORIO n=0 ==> N 1/n!=1/0! + 1/1! + 1/2! ...
  A função deve ter como parâmetro o número de termos que serão somados, N. Note que
  quanto maior esse número, mais proximo do valor 'e' está a resposta.
 */

//função fatorial
int fatorial(int N){
    int i, fat = 1;
    if(N < 0){
      printf("Valor negativo");
    }

    for(i = N; i >= 1 ; i--){
      fat = fat * i;
    }
    return fat;
}

//função neperiano
double neperiano(int N){
  double e = 0;

  for(int i = 0; i <= N; i++){
    e = e + (double) 1/fatorial(i);
  }//for

  return e;
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declaração de variaveis
  double resultado;

  printf("Forneça o valor de N:"); //pede o valor de N
  scanf("%i", &N); //armazena N

  resultado = neperiano(N); //resultado recebe a função neperiano

  printf("e = %lf \n",resultado); //exibe o valor de resultado

  return 0;
}//main
