//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Construa um programa que leia através da entrada padrão uma string e retorne na saída
padrão o número de caracteres que a mesma possui */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[100];//declaração de variaveis

  printf("Escreva algo: "); //pede para o usuário escrever algo
  scanf("%99s",string); //armazena o que foi digitado

  int tamanho = strlen(string); //declara que o tamanho é igual ao comprimento da strinf

  printf("O tamanho da string é: %i \n", tamanho); //mostra o tamanho da string

  return 0;
}//main
