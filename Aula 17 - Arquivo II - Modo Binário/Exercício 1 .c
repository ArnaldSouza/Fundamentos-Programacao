//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Faça um prgrama que gere 100 numero aleatorios. Esse rograma deverá armazenar esses numeros em
um arquivo binario  */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração de variaveis
  int i, random[100];
  int lido[100];
  FILE *arq  = fopen("arquivo.bin", "w+b");
  //salva os valores no vetor
  for( i = 0; i < 100; i++){
    //gera um valor aleatorio entre 0 e 99 e salva no vetor
    random[i] = (rand() % 100);
  }//for

  fwrite(random, sizeof(int), 100, arq); //escreve os dados gerados no arquivo

  fseek(arq, 0, SEEK_SET); //volta para o começo do arquivo

  fread(lido, sizeof(int), 100, arq); //le o arquivo na memoria e exibe na tela

  for(i = 0; i < 100; i++){
    printf("%2i | %2i \n", random[i], lido[i]);
    // valor gerado para ser salvo no .bin | valor convertido para exibir na tela
  }//for

  fclose(arq); //fecha o arquivo

  return 0;
}//main
