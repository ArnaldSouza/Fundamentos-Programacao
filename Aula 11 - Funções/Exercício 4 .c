//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Escreva uma função que recebe por parâmetro um valor inteiro positivo N
e retorna o valor de S.
  S = 2/4 + 5/5 + 10/6 + ... + (N²+1)/(N+3) */

int ler_numero(); //declara a função para ler N
float calcula_numero(int N); //declara a função que calcula o somatório

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declaração de variaveis
  float s;

  N = ler_numero(); //iguala N a função ler_numero
  s = calcula_numero(N); //iguala s a função que calcula o somatorio

  printf("O somatório quando n é: %i , vale %.2f\n",N,s); //mostra o valor final do somatorio e N

  return 0;
}//main

//função ler numero
int ler_numero(){
  int N; //declara a variavel N
  printf("Digite um numero inteiro e positivo:"); //pede o valor de N
  scanf("%d",&N); //armazena N

  return N;
}//ler_numero

//função calcula_numero
float calcula_numero(int N){
  float s = 0; //declaração de variaveis
  float i;

  for( i = 1; i <= N; i++){
    s = s + ((pow(i,2)+1) / (i+3)); //calculo do somatorio
  }
    return s;
}//calcula_numero
