//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Considerando a ultima estrutura do exercicio anterior, escreva um programa que leia o arquivo
gerado contendo os dados dos 5 jogadores */

typedef struct{
  char nome[20];
  int pontos;
}Ranking;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  Ranking ranking[5];
  char str[20];

  FILE *arq = fopen("ranking.txt","r"); //criando e abrindo arquivo

  if(arq == NULL){
    printf("Arquivo não encontrado\n");
    printf("\n");
    exit(1);
  }//if

  //for para ler todos os dados do arquivo
  for(int i = 0; i < 5; i++){
    fscanf(arq, "%s %s", str, &ranking[i].nome);
    fscanf(arq, "%s %i", str, &ranking[i].pontos);
  }//for

  //for para exibir os dados do arquivo
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\n",ranking[i].nome);
    printf("Pontuação: %i pontos\n",ranking[i].pontos);
  }//for

  fclose(arq);

  return 0;
}//main
