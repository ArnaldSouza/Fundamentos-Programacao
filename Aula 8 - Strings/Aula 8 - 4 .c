//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/* Faça um programa que receba uma palavra com todas as letras minúsculas e transforme-as
em maiuscula. exemplo: banana ==> BANANA */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[100];//declaração de variaveis
  int tam;

  printf("Escreva algo: "); //pede para o usuário escrever algo
  scanf("%99s",string); //armazena o que foi digitado

  tam = strlen(string); //tamanho da string

  for(int i = 0; i < tam;i++){
    string[i] = toupper(string[i]); //toupper deixa as letras maiusculas
  }

  printf("%s \n", string); //imprime a palavra com letras maiusculas

  return 0;
}//main
