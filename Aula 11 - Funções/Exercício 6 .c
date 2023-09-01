//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Fa�a um fu��o que calcule e retorne o n�mero neperiano e
e=2,71828183, usando a s�rie a seguir:
  e = SOMATORIO n=0 ==> N 1/n!=1/0! + 1/1! + 1/2! ...
  A fun��o deve ter como par�metro o n�mero de termos que ser�o somados, N. Note que
  quanto maior esse n�mero, mais proximo do valor 'e' est� a resposta.
 */

//fun��o fatorial
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

//fun��o neperiano
double neperiano(int N){
  double e = 0;

  for(int i = 0; i <= N; i++){
    e = e + (double) 1/fatorial(i);
  }//for

  return e;
}

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declara��o de variaveis
  double resultado;

  printf("Forne�a o valor de N:"); //pede o valor de N
  scanf("%i", &N); //armazena N

  resultado = neperiano(N); //resultado recebe a fun��o neperiano

  printf("e = %lf \n",resultado); //exibe o valor de resultado

  return 0;
}//main
