//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Elabore um programa para calcular e exibir o número de vezes que cada letra
ocorre dentro de um arquivo texto.Ignore as letras com acento. O usuário deverá
informar o nome do arquivo. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  FILE *arq;

  //declaração de variaveis
  char letras[400], arquivo[20];
  int conta_letra = 0, j = 0, contador2 = 1;
  char recebe_letra_minuscula;

  //solicita o nome do arquivo
  printf("Digite o nome do arquivo : ");
  fgets(arquivo, 20,stdin);
  arquivo[strcspn(arquivo,"\n")] = '\0'; //substitui o \n por \0
  setbuf(stdin, NULL); //limpar o buffer

  arq = fopen(arquivo, "r");

  while(fgets(letras, 400, arq)){
    printf("A %iª linha contém: \n", contador2);
    for(recebe_letra_minuscula = 'A'; recebe_letra_minuscula <= 'Z'; recebe_letra_minuscula++){
      for(j = 0; letras[j] != '\0'; j++){
        if(letras[j] == recebe_letra_minuscula || letras[j] == tolower(recebe_letra_minuscula)){
          conta_letra++;
        }//if
      }//for interno
      if(conta_letra != 0){// Este if serve para o programa imprimir apenas as letras que o arquivo contem
        printf("A letra %c aparecendo %d vezes\n", recebe_letra_minuscula, conta_letra);
      }//if
     conta_letra = 0;
    }//for externo
    printf("\n");
    contador2++;
  }//while
  printf("\n");

  fclose(arq); //fecha o arquivo

  return 0;
}//main
