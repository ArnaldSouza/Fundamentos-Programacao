
//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas
linhas esse arquivos possui. */

//função main
int main(){
  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  char nomeArquivo[20];
  int numLinha = 0;
  int final = 0;

  //pede ao usuário o nome de um arquivo
  printf("Digite o nome de um arquivo: ");
  fgets(nomeArquivo,20,stdin);
  nomeArquivo[strcspn(nomeArquivo,"\n")] = '\0'; //substitui \n  por \0
  setbuf(stdin,NULL);

  FILE *arq = fopen(nomeArquivo, "r"); //abre o arquivo

  if(arq == NULL){ //verificar se o arquivo está no diretório
    perror("Arquivo não encontrado! ");
    printf("\n");
    exit(1);
  }//if

  while(1){
    final = fgetc(arq);
    if(final == '\n' || final == EOF){
      numLinha++;
    }//if
    if(feof(arq))
      break;
  }//while

  printf("O número de linhas do arquivo é: %i\n",numLinha); //exibindo o numero de linhas

  fclose(arq); //fecha o arquivo
  return 0;
}//main
