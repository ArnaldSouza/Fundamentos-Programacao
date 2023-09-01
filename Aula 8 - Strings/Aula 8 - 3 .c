//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que receba uma palavra e imprima uma nova palavra sendo cada letra a seguinte
a da nova palavra original. Por exemplo: Banana ==> Cbobob*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[100];//declaração de variaveis
  int tam;

  printf("Escreva algo: "); //pede para o usuário escrever algo
  scanf("%99s",string); //armazena o que foi digitado

  tam = strlen(string); //tamanho da string

  for(int i = 0; i < tam;i++){ //utilizando a tabela ASCII para decobrir a letra seguinte
    string[i] = string[i] + 1;
  }

  printf("%s \n", string); //exibindo a string com a letra seguinte
  return 0;
}//main
