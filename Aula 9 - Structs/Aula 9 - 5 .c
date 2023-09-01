//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma estrutura representeando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome e a nota de 4 provas.
- Permita a o usuário entrar com dado de 5 alunos.
- Encontre o aluno com maior nota da primeira prova.
- encontre o aluno com maior média geral
- encontre o aluno com menor média geral
- Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação. */

#define TAM 5

typedef struct{
  char nome[20];
  int mat;
  float n1;
  float n2;
  float n3;
  float n4;
}Aluno;

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Aluno alunos[TAM]; //declaração de variaveis
  float media[TAM], maiornota1 = 0, maiormedia = 0, menormedia = 10;
  int  auxn1, auxmediamaior, auxmediamenor;

  for(int i = 0; i < TAM; i++){
    printf("Digite seu nome:"); //pede o nome do aluno
    fgets(alunos[i].nome,20,stdin); //aramazena o nome do aluno
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; //substitui o \n por \0
    setbuf(stdin, NULL); //limpa o buffer

    printf("Digite sua matrícula:");//pede a matricula
    scanf("%i",&alunos[i].mat); //armazenas a matricula

    //pede e armazena as 4 notas
    printf("Digite sua primeira nota:");
    scanf("%f",&alunos[i].n1);

    printf("Digite sua segunda nota:");
    scanf("%f",&alunos[i].n2);

    printf("Digite sua terceira nota:");
    scanf("%f",&alunos[i].n3);

    printf("Digite sua quarta nota:");
    scanf("%f",&alunos[i].n4);

    setbuf(stdin, NULL); //limpa o buffer

    //calculo da média
    media[i] = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4) / 4;
  }

  for(int i = 0; i < TAM; i++){
    printf("A media do aluno %s foi %.2f \n", alunos[i].nome, media[i]);
  }//for para mostrar as medias dos alunos

  for(int i = 0; i < TAM; i++){
    if(alunos[i].n1 > maiornota1){
      maiornota1 = alunos[i].n1;
      auxn1 = i;
    }//if
  }//for para achar e exibir a maior primeira nota
  printf("A maior primeira nota foi: %.2f , do aluno(a): %s \n",maiornota1, alunos[auxn1].nome);

  for(int i = 0; i < TAM; i++){
    if(media[i] > maiormedia){
      maiormedia = media[i];
      auxmediamaior = i;
    }//if
  }//for para achar e exibirr a maior media
  printf("A maior media foi: %.2f , do aluno(a): %s \n",maiormedia, alunos[auxmediamaior].nome);

  for(int i = 0; i < TAM; i++){
    if(media[i] < menormedia){
      menormedia = media[i];
      auxmediamenor = i;
    }//if
  }//for para achar e exibir a menor media
  printf("A menor media foi: %.2f , do aluno(a): %s \n",menormedia, alunos[auxmediamenor].nome);

  for(int i = 0; i < TAM; i++){
    if(media[i] >= 6){
      printf("O aluno %s foi aprovado!!! \n", alunos[i].nome);
    }else{
      printf("O aluno %s foi reprovado!!! \n", alunos[i].nome);
    }//if-else
  }//for para mostrar se o aluno foi aprovado ou reprovado

  return 0;
}//main
