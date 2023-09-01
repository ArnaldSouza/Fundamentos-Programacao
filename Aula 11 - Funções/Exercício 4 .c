//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Escreva uma fun��o que recebe por par�metro um valor inteiro positivo N
e retorna o valor de S.
  S = 2/4 + 5/5 + 10/6 + ... + (N�+1)/(N+3) */

int ler_numero(); //declara a fun��o para ler N
float calcula_numero(int N); //declara a fun��o que calcula o somat�rio

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declara��o de variaveis
  float s;

  N = ler_numero(); //iguala N a fun��o ler_numero
  s = calcula_numero(N); //iguala s a fun��o que calcula o somatorio

  printf("O somat�rio quando n �: %i , vale %.2f\n",N,s); //mostra o valor final do somatorio e N

  return 0;
}//main

//fun��o ler numero
int ler_numero(){
  int N; //declara a variavel N
  printf("Digite um numero inteiro e positivo:"); //pede o valor de N
  scanf("%d",&N); //armazena N

  return N;
}//ler_numero

//fun��o calcula_numero
float calcula_numero(int N){
  float s = 0; //declara��o de variaveis
  float i;

  for( i = 1; i <= N; i++){
    s = s + ((pow(i,2)+1) / (i+3)); //calculo do somatorio
  }
    return s;
}//calcula_numero
