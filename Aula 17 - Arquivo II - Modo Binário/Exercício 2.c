//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Elabore um programa que leia um arquivo binário contendo 100 numeros e
mostre na tela a soma deles */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  int i, random[100], soma = 0;
  int lido[100];
  FILE *arq  = fopen("arquivo.bin", "rb");

  for(i = 0; i < 100; i++){ //for para passar por todas as posições do arquivo e fazer a soma deles
    fread(random, sizeof(int), 100, arq);
    soma += random[i];
  }//for

  printf("A soma é: %i\n",soma); //exibe a soma do arquivo
  fclose(arq);//fecha o arquivo

  return 0;
}//main
