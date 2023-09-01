//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro
para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro
nulo deverá ser retornado.
*/

//função criaVet
int criaVet(int N){
  int *vet;

  vet = (int*) malloc(N * sizeof(int)); //faz a alocação da memória

  if(N <= 0){ //quando N e menor ou igual a zero
      
    free(vet); //desaloca a porção de memória alocada
    return NULL;

  }else{//quando n recebe valores inteiros

    for(int i = 0; i < N; i++){ //pede os elementos do vetor e os armazena
      printf("Forneça o %iº elemento:",i+1);
      scanf("%i",&vet[i]);
    }

    printf("\nVetor:[ "); //imprime os valores do vetor
    for(int i = 0; i < N; i++){
      printf("%i ", vet[i]);
    }
    printf("]\n");

    free(vet); //desaloca a porção de memória alocada
    return (int*) malloc(N * sizeof(int));;
  }
}
//cria vet

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declaração de variaveis

  printf("Forneça o tamanho do vetor: "); //pede o tamanho do vetor
  scanf("%i",&N);//armazena o tam do vetor

  criaVet(N); //chama a função criaVet e passa N como parâmetro

  return 0;
}//main
