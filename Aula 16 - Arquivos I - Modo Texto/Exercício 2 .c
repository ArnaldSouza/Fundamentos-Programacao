//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Escreva um programa que leia do usuário os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo). */

void juntar_arquivos(FILE *alterar , FILE *copia){
  char modificar_arquivo [1000];

  while(fgets(modificar_arquivo, sizeof modificar_arquivo, copia) != NULL){
    fputs (modificar_arquivo, alterar);
  }//while

}//juntar_arquivos

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  char arquivo1[400];
  char arquivo2[400];

  //solicita os nomes dos arquivos
  printf("Digite o nome do primero arquivo: ");
  fgets(arquivo1, 400,stdin);
  arquivo1[strcspn(arquivo1,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  FILE *arq1 = fopen(arquivo1 , "r"); //abrindo arquivo 1

  //verificando se o arquivo 1 existe
  if(arq1 == NULL){
    perror("Arquivo 1 não encontrado!");
    printf("\n");
    exit(1);
  }//if

  printf("Digite o nome do segundo arquivo: ");
  fgets(arquivo2, 400,stdin);
  arquivo2[strcspn(arquivo2,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  FILE *arq2 = fopen(arquivo2 , "r"); //abrindo arquivo 2

  //verificando se o arquivo 2 existe
  if(arq2 == NULL){
    perror("Arquivo 2 não encontrado!");
    printf("\n");
    exit(1);
  }//if

  FILE *arq3 = fopen("banana.txt" , "a");
  //juntar arquivos 1 e 3
  juntar_arquivos(arq3, arq1);

  //juntar arquivos 2 e 3
  juntar_arquivos(arq3, arq2);

  //verificando se o arquivo 3 existe
  if(arq3 == NULL){
    perror("Arquivo 3 não encontrado!");
    printf("\n");
    exit(1);
  }//if

  //fechando arquivos após modica-los e lê-los
  fclose(arq1);
  fclose(arq2);
  fclose(arq3);

  return 0;
}//main
