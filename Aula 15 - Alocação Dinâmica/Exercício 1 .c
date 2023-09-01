//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica
desse vetor. Por fim, leia o vetor e o imprima.   */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int *vet , tam;//declaração de variaveis

  printf("Qual o tamanho do vetor:"); //pede o tamanho do vetor
  scanf("%i",&tam); //armazena o tamanho do vetor

  vet = (int*) malloc(tam * sizeof(int)); //aloca a memória

  for(int i = 0; i < tam; i++){ //pede os elemtnos do vetor e os aramzena
    printf("Forneça o %iº elemento:",i+1);
    scanf("%i",&vet[i]);
  }

  printf("\nVetor:[ "); //imprime os valores do vetor
  for(int i = 0; i < tam; i++){
    printf("%i ", vet[i]);
  }
  printf("]\n");

  free(vet);
  return 0;
}//main
