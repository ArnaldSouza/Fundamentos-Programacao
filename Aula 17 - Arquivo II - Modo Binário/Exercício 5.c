//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Crie uma estrutura representadno um ranking de vídeo game. Essa estrutura deve conter o nome
do jogador e sua pontuação. Em seguida, escreva um prgrama que leia os dados de 5 jogadores e os
em uma arquivo utilizando funções de escrita formatados. */

typedef struct{
  char nome[20];
  int pontos;
}Ranking;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  Ranking jogador[5];

  FILE *arq = fopen("ranking.txt", "w+"); //abre o arquivo 

  for (int i = 0; i < 5; i++){ //for para preencher a estrutura

    printf("Digite o nome do %i° jogador: ",i+1); //preenchendo o nome do jogador
    fgets(jogador[i].nome, 20, stdin);
    jogador[i].nome[strcspn(jogador[i].nome,"\n")] = '\0';
    fflush(stdin);

    printf("Digite a pontuação do %i° jogador: ",i+1); //preenchendo a pontuação do jogador
    scanf("%f",&jogador[i].pontos);
    fflush(stdin);
    printf("\n");
  }//for


  for (int i = 0; i < 5; i++){ //for para enviar os dados para o arquivo
    fprintf(arq, "Nome: %s \n", jogador[i].nome);
    fprintf(arq, "Pontuação: %i \n", jogador[i].pontos);
  }//for

  fclose(arq); //fecha o arquivo

  return 0;
}//main
