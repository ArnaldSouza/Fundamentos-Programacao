//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que contenha duas vari�veis inteiras. Compare os endere�os e exiba o endere�o e o conte�do
do amior endere�o. */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int x, y;//declara��o de variaveis

  printf("Insira a vari�vel x: ");//pede vari�vel x
  scanf("%i",&x); //armazena x
  printf("Insira a vari�vel y: "); //pede a vari�vel y
  scanf("%i",&y); //armazena y

  if(&x > &y){ //compara os endere�os de x e y
    printf("A vari�vel x tem o maior endere�o de mem�ria e cont�m %p \n",&x); //se x for maior exibe o seu endere�o
  }else if(&y > &x){
    printf("A vari�vel y tem o maior endere�o de mem�ria e cont�m &p \n",&y); //se y for maior exibe o seu endere�o
  }

  return 0;
}//main
