//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma fun��o que receba um valor de um inteiro positivo N, calcule e retone
o fatorial desse numero */

//fun��o fatorial
int fatorial(int N){
    int i, fat = 1;
    if(N < 0){
      printf("Valor negativo");
    }//if

    for(i = N; i >= 1 ; i--){
      fat = fat * i;
    }//for

    return fat;
}


//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N, resultado;//declara��o de variaveis

  printf("Forne�a o valor de N:");
  scanf("%i", &N);

  resultado = fatorial(N);

  printf("%i! = %i \n",N,resultado);

  return 0;
}//main
