//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Construa um programa que leia atrav�s da entrada padr�o uma string e retorne na sa�da
padr�o o n�mero de caracteres que a mesma possui */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[100];//declara��o de variaveis

  printf("Escreva algo: "); //pede para o usu�rio escrever algo
  scanf("%99s",string); //armazena o que foi digitado

  int tamanho = strlen(string); //declara que o tamanho � igual ao comprimento da strinf

  printf("O tamanho da string �: %i \n", tamanho); //mostra o tamanho da string

  return 0;
}//main
