//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma estrutura representando uma aluno de uma disciplina. Essa estrutura deve conter o número de matrícula
do aluno, seu nome e as notas de três provas. Agora. escreva uma função que receba um vetor de tamanho 5 dessa
estrutura. Essa função deve retornar o índice do aluno que possui a maior média geral entre todos os alunos. */

typedef struct{
  char nome[20];
  char mat[30];
  float n1;
  float n2;
  float n3;
  float media;
}Aluno; //struct aluno

void maiormgeral(Aluno alunos[5]){
  float media[5], maiormedia = 0;
  int auxmediamaior;

  for(int i = 0; i < 5; i++){
    if(media[i] > maiormedia){
      maiormedia = media[i];
      auxmediamaior = i;
    }//if
  }//for para achar e exibirr a maior media
  printf("A maior media foi do aluno(a), que tem o índice %i\n",auxmediamaior);

}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Aluno alunos[5]; //declaração de variaveis
  float media[5];

  for(int i = 0; i < 5; i++){

    printf("Digite seu nome:"); //pede o nome do aluno
    fgets(alunos[i].nome,20,stdin); //aramazena o nome do aluno
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; //substitui o \n por \0
    setbuf(stdin, NULL); //limpa o buffer

    printf("Digite sua matrícula:");//pede a matricula
    scanf("%i",&alunos[i].mat); //armazena a matricula

    //pede e armazena as 4 notas
    printf("Digite sua primeira nota:");
    scanf("%f",&alunos[i].n1);
    setbuf(stdin, NULL); //limpa o buffer

    printf("Digite sua segunda nota:");
    scanf("%f",&alunos[i].n2);
    setbuf(stdin, NULL); //limpa o buffer

    printf("Digite sua terceira nota: ");
    scanf("%f",&alunos[i].n3);

    setbuf(stdin, NULL); //limpa o buffer
    printf("\n");
    //calculo da média
    media[i] = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
    setbuf(stdin, NULL); //limpa o buffer
  }

  maiormgeral(alunos);

  return 0;
}//main
