//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Crie um programa para calcular e exibir o número de palavras
contido em um arquivo texto. O usuário deverá informar o nome do
arquivo.  */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  char arquivo [20];
  int cont_palavras = 0;
  char conta = 0;

  //solicita o nome do arquivo
  printf("Digite o nome do arquivo : ");
  fgets(arquivo, 20,stdin);
  arquivo[strcspn(arquivo,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  FILE *arq = fopen(arquivo, "r"); //abrir o arqivo

  //verificar se o arquivo está no diretório correto
  if(arq == NULL){
    perror("Arquivo não encontrado!");
    printf("\n");
    exit(1);
  }//if

  //while para percorrer o arquivo e ver a quantidade de espaços e enter
  while((conta = fgetc(arq)) != EOF){
    if(conta == ' ' || conta == '\n'){
      cont_palavras++;
    }
  }

  //exibe o numero de palvras do respectivo arquivo
  printf("O número de palavras no arquivo %s é: %i \n",arquivo,cont_palavras);

  fclose(arquivo); //fecha o arquivo

  return 0;
}//main
