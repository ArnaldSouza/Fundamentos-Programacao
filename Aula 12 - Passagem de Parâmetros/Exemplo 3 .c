//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[20];
  int idade;
  float altura;
}Pessoa;

void imprime(Pessoa p[2]){
  strcpy(p[0].nome, "Barreto"); //vetores e matrizes sempre  são passados como referencias
  printf("-----------------------\n");

  for(int i=0; i<2; i++)
    printf("%s, %i, %.2f\n", p[i].nome, p[i].idade, p[i].altura);

  printf("-----------------------\n");

}

//função main
int main(){

  Pessoa p[2] = {{"Joao",56, 1.78}, {"Maria", 25, 1.75}};//declaração de variaveis

  imprime(p);


  return 0;
}//main
