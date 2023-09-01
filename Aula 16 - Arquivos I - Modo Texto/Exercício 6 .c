//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Elabore um programa no qual o usu�rio informe o nome de um arquivo texto e uma palavra,
e o programa informe o n�mero de vezes que aquela palavra aparece */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declara��o de variaveis
  char nome[100];
  char palavra[100];
  char receber;
  int contador = 0;
  int cont_palavras = 0;
  int prox_letra = 0;

  //pedindo para o usu�rio entrar com o nome do arquivo em que deseja buscar a palavra
  printf("Insira o nome do arquivo em que deseja buscar a palavra: ");
  fgets(nome, 100, stdin);
  nome[strcspn(nome, "\n")] = '\0';
  setbuf(stdin, NULL);

  FILE *arquivo = fopen(nome, "r");

  if(arquivo == NULL){ //verificar se o arquivo est� no diret�rio
    printf("Arquivo n�o encontrado! ");
    printf("\n");
    exit(1);
  }//if

  //pedindo para o usu�rio a palavra que deseja buscar
  printf("Insira a palavra que deseja buscar: ");
  fgets(palavra, 100, stdin);
  palavra[strcspn(palavra, "\n")] = '\0';
  setbuf(stdin, NULL);

  //la�o de repeti��o que verifica todos caracteres do arquivo e v� se todos ele s�o iguais
  while((receber = fgetc(arquivo)) != EOF){
    if(toupper(receber) == toupper(palavra[prox_letra])){
    //se inicialmente forem iguais eles v�o para o proximo caracter, caso n�o, cai no else e retoma o processo
      contador++;
      prox_letra++;
    }else{
      contador = 0;
      prox_letra = 0;
    }//else
    if(contador == strlen(palavra)){
      cont_palavras++;
      contador = 0;
    }
  }//while

  //exibindo a  quantidade de vezes que a palvra aparece no arquivo
  printf("A palavra %s aparece %i vez(es) no arquivo: %s \n",palavra,cont_palavras,nome);

  return 0;
}//main
