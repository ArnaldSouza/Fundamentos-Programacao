//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie um programa de cadastro que receba, armazene,  e em  seguida, exiba os dados de
5 pessoa. Cada pesoa possui: nome, idade, peso, data de nascimento, brasileiro ou estrangeiro.
caso seja brasileiro, armazene o CPF, caso estrangeiro, armazene o passaporte.
Utilize structs, typedef, union e enum.
*/
#define TAM 2
//enumerando a locaidade 1 se brasileiro 2 se estrangeiro
typedef enum {BRASILEIRO = 1 , ESTRANGEIRO} localidade;

//estrutura cadastro com os dados da pessoa
typedef struct{
  char nome[20];
  int idade;
  float peso;
  char data_nasci[11];
  localidade nacionalidade;
  union {
    char cpf[12];
    char passaporte[13];
  }documento;
}Cadastro;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Cadastro pessoa[TAM]; //declaração de variaveis

  for(int i = 0; i < TAM; i++){

  printf("Digite seu nome: "); //pede e armazena o nome
  fgets(pessoa[i].nome,20,stdin);
  pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
  fflush(stdin);

  printf("Digite sua idade: "); //pede e armazena a idade
  scanf("%i",&pessoa->idade);
  fflush(stdin);

  printf("Digite seu peso:"); //pede e armazena o peso
  scanf("%f",&pessoa->peso);
  fflush(stdin);

  printf("Sua data de nascimento:"); //pede e armazena a data de nascimento
  fgets(pessoa[i].data_nasci,11,stdin);
  pessoa[i].data_nasci[strcspn(pessoa[i].data_nasci, "\n")] = '\0';
  fflush(stdin);

  printf("\n"); //pede a nacionalidade
  printf("************Sua nacionalidade:************\n");
  printf("******************************************\n");
  printf("************** 1 - Brasileiro ************\n");
  printf("************* 2 - Estrangeiro ***********\n");
  printf("******************************************\n");
  printf("Insira a opção:");
  scanf("%i",&pessoa[i].nacionalidade);
  fflush(stdin);

  //se 1 ==> brasileiro se 2 ==> estrangeiro e armazena
    switch (pessoa[i].nacionalidade) {
      case BRASILEIRO:
        printf("Você é brasileiro!\n");
        printf("Digite seu CPF:");
        fgets(pessoa[i].documento.cpf, 12, stdin);
        pessoa[i].documento.cpf[strcspn(pessoa[i].documento.cpf, "\n")] = '\0';
        fflush(stdin);
        break;
      case ESTRANGEIRO:
        printf("Você é Estrangeiro!\n");
        printf("Digite seu Passaporte:");
        fgets(pessoa[i].documento.passaporte, 13, stdin);
        pessoa[i].documento.passaporte[strcspn(pessoa[i].documento.passaporte, "\n")] = '\0';
        fflush(stdin);
        break;
  }
  }
  return 0;
}//main
