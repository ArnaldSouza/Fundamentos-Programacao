//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/* Fa�a um programa que receba uma palavra com todas as letras min�sculas e transforme-as
em maiuscula. exemplo: banana ==> BANANA */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[100];//declara��o de variaveis
  int tam;

  printf("Escreva algo: "); //pede para o usu�rio escrever algo
  scanf("%99s",string); //armazena o que foi digitado

  tam = strlen(string); //tamanho da string

  for(int i = 0; i < tam;i++){
    string[i] = toupper(string[i]); //toupper deixa as letras maiusculas
  }

  printf("%s \n", string); //imprime a palavra com letras maiusculas

  return 0;
}//main
