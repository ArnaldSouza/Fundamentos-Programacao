#include<stdio.h>

//Faça um programa que receba duas notas de um aluno. Calcule e
//mostre a média aritmética das notas e uma mensagem conforme a
//tabela

int main(){
  float nota1, nota2, media;

  printf("forneca nota 1 : ");
  scanf("%f", &nota1);
  printf("forneca nota 2 : ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if(media <= 6.0){
    printf("aprovado");
  }else{
    if(media>=4.0)
      printf("exame");
    else
      printf("Reprovado");
  }

  return 0;

}
