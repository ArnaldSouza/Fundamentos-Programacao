//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas
do teclado, calcule a média e armazene a situação do aluno
media */

struct Aluno{
  char nome[30];
  char curso[40];
  float notas[4];
  float media;
  char situacao[10];
}; //definição da struct

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  struct Aluno bruno;//declaração de variaveis

  printf("Informe o nome:"); //pedido do nome
  scanf("%s",bruno.nome); //armazenamento do nome
  printf("Informe o curso:"); //pedido do curso
  scanf("%s",bruno.curso); //armazenamento do curso

  for(int i = 0; i <4; i++){ //pedido e armazenamento das notas
    printf("Forneça a nota %i:", i + 1);
    setbuf(stdin, NULL);
    scanf("%f", &bruno.notas[i]);
    setbuf(stdin, NULL);
  }

  bruno.media = 0; //calculo da media
  for(int i = 0; i < 4; i++)
    bruno.media = bruno.media + bruno.notas[i];

  bruno.media = bruno.media / 4 ;

  if(bruno.media < 3) //analisando a situação do aluno dependendo da média
    strcpy(bruno.situacao, "Reprovado");
  else if(bruno.media < 7)
    strcpy(bruno.situacao, "Exame");
  else
    strcpy(bruno.situacao, "Aprovado");

printf("A situação do aluno %s é: %s (média = %1.f )\n", bruno.nome, bruno.situacao, bruno.media);
//imprimindo o nome do aluno, a situação e a média

  return 0;
}//main
