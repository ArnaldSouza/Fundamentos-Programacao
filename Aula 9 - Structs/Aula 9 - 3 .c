//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* Construa uma estrutura aluno com nome, numero de
matrícula e curso. Leia do usuário a informação de 5 alunos,
armazene em vetor dessa estrutura e imprima os dados na
tela */

typedef struct{
  char nome[30];
  char curso[20];
  char matricula[10];
}Aluno; //definindo a struct

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Aluno turma[5];//declaração de variaveis

  for(int i = 0; i < 5; i++){
    printf("Informe o nome:");
    scanf("%s", turma[i].nome);
    printf("Informe o curso:");
    scanf("%s", turma[i].curso);
    printf("Informe a matrícula:");
    scanf("%s", turma[i].matricula);
  }//for pedindo e armazenando as informações do aluno

  for(int i = 0; i < 5; i++){
    printf("%s,%s,%s \n",turma[i].nome, turma[i].curso, turma[i].matricula);
  }//exibindo os dados dos alunos

  return 0;
}//main
