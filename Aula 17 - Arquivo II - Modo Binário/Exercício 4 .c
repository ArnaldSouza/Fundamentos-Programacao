//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Considerando a estrutura do atleta do exercicio anterior, escreva um programa que leia
um arquivo binario contendo informações de cinco atletas. Calcule e exiba o nome do atleta
mais alto e do mais velho */

typedef struct{
  char nome[20];
  char esporte[10];
  int idade;
  float altura;
}Atletas;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  Atletas atleta[5];
  int idade = 0;
  float altura = 0;
  int pos_idade = 0;
  int pos_altura = 0;

  FILE *arq = fopen("atletas.bin","rb"); //declarando o arquivo e abrindo ele para leitura

  if(arq == NULL){//verificando se o arquivo está no diretorio
    printf("Arquivo não está no diretório\n");
    printf("\n");
    exit(1);
  }//if

  fread(atleta, sizeof(Atletas), 5, arq); //lendo o arquivo

  for(int i = 0; i < 5; i++){
    if(altura <= atleta[i].altura){
      altura = atleta[i].altura;
      pos_altura = i;
    }//if
  }//for

  for(int j = 0; j < 5; j++){
    if(idade < atleta[j].idade){
      idade = atleta[j].idade;
      pos_idade = j;
    }//if
  }//for

  printf("O atleta mais alto é: %s, com %.2f m\n",atleta[pos_altura].nome,altura);
  printf("O atleta mais velho é: %s, com %i anos\n",atleta[pos_idade].nome,idade);

  fclose(arq);
  
  return 0;
}//main
