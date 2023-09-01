//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Construa uma estrutura aluno com nome, curso e 4 notas,
m�dia e situa��o. Leia as informa��es nome, curso e notas
do teclado, calcule a m�dia e armazene a situa��o do aluno
media */

struct Aluno{
  char nome[30];
  char curso[40];
  float notas[4];
  float media;
  char situacao[10];
}; //defini��o da struct

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  struct Aluno bruno;//declara��o de variaveis

  printf("Informe o nome:"); //pedido do nome
  scanf("%s",bruno.nome); //armazenamento do nome
  printf("Informe o curso:"); //pedido do curso
  scanf("%s",bruno.curso); //armazenamento do curso

  for(int i = 0; i <4; i++){ //pedido e armazenamento das notas
    printf("Forne�a a nota %i:", i + 1);
    setbuf(stdin, NULL);
    scanf("%f", &bruno.notas[i]);
    setbuf(stdin, NULL);
  }

  bruno.media = 0; //calculo da media
  for(int i = 0; i < 4; i++)
    bruno.media = bruno.media + bruno.notas[i];

  bruno.media = bruno.media / 4 ;

  if(bruno.media < 3) //analisando a situa��o do aluno dependendo da m�dia
    strcpy(bruno.situacao, "Reprovado");
  else if(bruno.media < 7)
    strcpy(bruno.situacao, "Exame");
  else
    strcpy(bruno.situacao, "Aprovado");

printf("A situa��o do aluno %s �: %s (m�dia = %1.f )\n", bruno.nome, bruno.situacao, bruno.media);
//imprimindo o nome do aluno, a situa��o e a m�dia

  return 0;
}//main
