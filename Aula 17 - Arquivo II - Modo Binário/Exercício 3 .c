//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Crie uma estrutura para armazenar informaçãoes de um atleta. Essa estrutura deve conter o nome,
seu esporte, idade e altura. Agora , escreva um programa que leia os dados de conco atletas e os
armazene em um arquivo binário. */

typedef struct{
  char nome[20];
  char esporte[10];
  int idade;
  float altura;
}Atleta;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  Atleta atleta[5];
  int i;

  FILE *arq = fopen("atletas.bin", "wb");

  for (i = 0; i < 5; i++){
    printf("Digite o nome do %i° atleta: ",i+1); //preenchendo o nome do atleta
    fgets(atleta[i].nome, 20, stdin);
    atleta[i].nome[strcspn(atleta[i].nome,"\n")] = '\0';
    fflush(stdin);

    printf("Digite o esporte do %i° atleta: ",i+1); //preenchendo o esporte do atleta
    fgets(atleta[i].esporte, 10, stdin);
    atleta[i].esporte[strcspn(atleta[i].esporte,"\n")] = '\0';
    fflush(stdin);

    printf("Digite a idade do %i° atleta: ",i+1); //preenchendo a idade do atleta
    scanf("%i",&atleta[i].idade);
    fflush(stdin);

    printf("Digite a altura do %i° atleta: ",i+1); //preenchendo a altura do atleta
    scanf("%f",&atleta[i].altura);
    fflush(stdin);
    printf("\n");
  }//for

  fwrite(atleta, sizeof(Atleta), 5, arq); //armazenando a estrutura e lendo ela no aqruivo binário

  printf("\n");

  fclose(arq); //fechando o arquivo

  return 0;
}//main
