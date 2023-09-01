//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma fun��o que receba um valor inteiro positivo N por par�metro e retorne o ponteiro
para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro
nulo dever� ser retornado.
*/

//fun��o criaVet
int criaVet(int N){
  int *vet;

  vet = (int*) malloc(N * sizeof(int)); //faz a aloca��o da mem�ria

  if(N <= 0){ //quando N e menor ou igual a zero
      
    free(vet); //desaloca a por��o de mem�ria alocada
    return NULL;

  }else{//quando n recebe valores inteiros

    for(int i = 0; i < N; i++){ //pede os elementos do vetor e os armazena
      printf("Forne�a o %i� elemento:",i+1);
      scanf("%i",&vet[i]);
    }

    printf("\nVetor:[ "); //imprime os valores do vetor
    for(int i = 0; i < N; i++){
      printf("%i ", vet[i]);
    }
    printf("]\n");

    free(vet); //desaloca a por��o de mem�ria alocada
    return (int*) malloc(N * sizeof(int));;
  }
}
//cria vet

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N;//declara��o de variaveis

  printf("Forne�a o tamanho do vetor: "); //pede o tamanho do vetor
  scanf("%i",&N);//armazena o tam do vetor

  criaVet(N); //chama a fun��o criaVet e passa N como par�metro

  return 0;
}//main
