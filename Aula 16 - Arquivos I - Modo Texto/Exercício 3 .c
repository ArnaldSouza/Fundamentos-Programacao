//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* /*Escreva um programa para converter o conte�do de um arquivo
texto em caracteres mai�sculos. O programa dever� ler do usu�rio o
nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declara��o de variaveis
  char arquivo_converter[20];
  char arquivo_salvar[20];
  int contador;

  //solicita o nome do primeiro arquivo
  printf("Digite o nome do arquivo que deseja alterar: ");
  fgets(arquivo_converter, 20,stdin);
  arquivo_converter[strcspn(arquivo_converter,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  //solicita o nome do primeiro arquivo
  printf("Digite o novo nome do arquivo alterado: ");
  fgets(arquivo_salvar, 20,stdin);
  arquivo_salvar[strcspn(arquivo_salvar,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  FILE *converter = fopen(arquivo_converter , "r"); //lendo arquivo para converter
  FILE *salvar = fopen(arquivo_salvar , "w"); //abrindo arquivo 1

  //verificando se o arquivo 1 existe
  if(converter == NULL){
    perror("Erro ao abrir arquivo para converter");
    printf("\n");
    exit(1);
  }//if

  //verificando se o arquivo 1 existe
  if(salvar == NULL){
    perror("Erro ao abrir arquivo convertido");
    printf("\n");
    exit(1);
  }//if

  while((contador = fgetc(converter)) != EOF){
    fputc(toupper(contador),salvar);
  }

  fclose(converter);
  fclose(arquivo_salvar);

  return 0;
}//main
