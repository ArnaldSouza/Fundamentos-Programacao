//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Crie um programa para calcular e exibir o n�mero de palavras
contido em um arquivo texto. O usu�rio dever� informar o nome do
arquivo.  */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declara��o de variaveis
  char arquivo [20];
  int cont_palavras = 0;
  char conta = 0;

  //solicita o nome do arquivo
  printf("Digite o nome do arquivo : ");
  fgets(arquivo, 20,stdin);
  arquivo[strcspn(arquivo,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  FILE *arq = fopen(arquivo, "r"); //abrir o arqivo

  //verificar se o arquivo est� no diret�rio correto
  if(arq == NULL){
    perror("Arquivo n�o encontrado!");
    printf("\n");
    exit(1);
  }//if

  //while para percorrer o arquivo e ver a quantidade de espa�os e enter
  while((conta = fgetc(arq)) != EOF){
    if(conta == ' ' || conta == '\n'){
      cont_palavras++;
    }
  }

  //exibe o numero de palvras do respectivo arquivo
  printf("O n�mero de palavras no arquivo %s �: %i \n",arquivo,cont_palavras);

  fclose(arquivo); //fecha o arquivo

  return 0;
}//main
