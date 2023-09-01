//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*  */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int *vet , tam;//declaração de variaveis

  printf("Qual o tamamho do vetor:");
  scanf("%i",&tam);

  vet = (int*) malloc(tam * sizeof(int));

  for(int i = 0; i < tam; i++){
    printf("Forneça o %iº elemento:",i+1);
    scanf("%i",&vet[i]);
  }

  printf("\nVetor:[");
  for(int i = 0; i < tam; i++){
    printf(" %i ", vet[i]);
  }
  printf("]\n");

  return 0;
}//main
