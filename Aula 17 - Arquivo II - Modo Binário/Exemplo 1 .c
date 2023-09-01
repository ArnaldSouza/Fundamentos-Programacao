//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//função main
int main(int argc, const char * argv[]){

  //-------------------------------------------------------
  //arquivo(escrever)
  //-------------------------------------------------------

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  FILE *arq; //declaração do arquivo

  //definindo algumas variaveis com tipos diferentes
  char str[11] = "Computacao";
  int i = 101;
  int vet[5] = {1, 2, 3, 4, 5};

  //abertura do arquivo
  arq = fopen("teste.bin", "wb");
  //wb - Write Binary -> wb (escrita em arquivo binário)

  if(arq == NULL){
    printf("WARNING: O arquivo de escrita não pode ser aberto");
    //matar a execução do programa;
    exit(1);
  }else{
    printf("Arquivo de escrita aberto com sucesso!\n");
  }

  //lógica do programa (mágica)

  //escrita do inteiro
  //guardando o valor de i (int), 1 unica vez, no arquivo arquivo
  printf("Gravando o int\n");
  fwrite(&i, sizeof(int), 1, arq);
  //escrita do vetor
  // guardando um vetor de inteiros, com 5 elementos, no arquivo arq
  printf("Gravando o vetor de ints\n");
  fwrite(vet, sizeof(int), 5, arq);
  //escrita da string
  //guardando uma palavra , com 10 chars, no arquivo arq
  printf("Gravando a palavra\n");
  fwrite(str, sizeof(char), 10, arq);

  //fechar o arquivo
  printf("Fechando o arquivo de escrita\n");
  fclose(arq);

  //-------------------------------------------------------
  //Leitura do que foi escrito
  //-------------------------------------------------------

  FILE *arq2;

  arq2 = fopen("teste.bin", "rb");
  //Read Binary -> rb -> leitura binária

  if(arq2 == NULL){
    printf("WARNING: O arquivo de leitura não pode ser aberto");
    //matar a execução do programa;
    exit(1);
  }else{
    printf("Arquivo de leitura aberto com sucesso!\n");
  }

  //leitura das variaveis
  int i2;         //i
  char str2[11];  //str
  int vet2[5];    //vet

  //lógica (leitura dos dados) -> fread
  //int, vetor, string

  //lendo um inteiro (bytes de inteiro), uma unica vez, do arquivo arq2 na variavel i2
  fread(&i2, sizeof(int), 1, arq2);

  //lendo um vetor de inteiros, de 5 elementos , lá do arquivo arq2, e guardando na variavel vet2
  fread(vet2, sizeof(int), 5, arq2);

  //lendo uma string de 10 caracteres, lá do arq 2 e guardando
  fread(str2, sizeof(int), 10, arq2);

  //-------------------------------------------------------
  //i2, vet2 str2  (informações) -> imprimir
  //-------------------------------------------------------

  printf("----------------------\n");
  printf("Inteiro: %d\n", i2);   //101
  printf("String: %s\n", str2);  //computacao
  printf("Vetor: [");            //1,2,3,4,5
  for(int i = 0; i < 5; i++){
    printf(" %d ",vet2[i]);
  }
  printf("]\n");
  printf("----------------------\n");

  //fechando arquivo de leitura
  printf("Fechando arquivo de leitura\n");
  fclose(arq2);
  return 0;
}//main
