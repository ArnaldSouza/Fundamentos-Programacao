//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma fun��o que receba um vetor de tamanho N e ordene seus valores. */

//fun��o organizarVetor
void organizarVetor(float vet[], int tam){
  float aux; //cria uma vari�vel auxiliar

  for (int i = 0; i < tam; i++) {
    for(int j = i + 1; j < tam; j++){
      if(vet[i] > vet[j]){ //se o valor do vetor da posi��o i, for maior que da posi��o i+1 eles trocam de posi��o
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }

  for (int i = 0; i < tam ; i++) { //for para exibir o vetor organizado
    printf("%.2f ",vet[i]);
  } //for
}//organizarVetor

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int tam;

  printf("Defina o tamanho do vetor:"); //pede o tamanho do vetor organizado
  scanf("%i",&tam); //armazena o tamanho do vetor

  float vet[tam];//declara��o de variaveis

  for (int i = 0; i < tam; i++) { //pede elemento a elemento do vetor e o armazena
    printf("Forne�a o %i� elemento:  ",i+1);
    scanf("%f",&vet[i]);
  }

  printf("Vetor informado: \n"); //exibe os valores do vetor informado
  for (int i = 0; i < tam; i++) {
    printf("%.2f ",vet[i]);
  }

  printf("\n \nVetor organizado: \n"); //exibe o vetor organizado
  organizarVetor(vet,tam); //chama a fun��o organizarVetor
  printf("\n");

  return 0;
}//main
