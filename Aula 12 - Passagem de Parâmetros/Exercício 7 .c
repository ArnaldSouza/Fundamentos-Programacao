//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma função que receba um vetor de tamanho N e ordene seus valores. */

//função organizarVetor
void organizarVetor(float vet[], int tam){
  float aux; //cria uma variável auxiliar

  for (int i = 0; i < tam; i++) {
    for(int j = i + 1; j < tam; j++){
      if(vet[i] > vet[j]){ //se o valor do vetor da posição i, for maior que da posição i+1 eles trocam de posição
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

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int tam;

  printf("Defina o tamanho do vetor:"); //pede o tamanho do vetor organizado
  scanf("%i",&tam); //armazena o tamanho do vetor

  float vet[tam];//declaração de variaveis

  for (int i = 0; i < tam; i++) { //pede elemento a elemento do vetor e o armazena
    printf("Forneça o %iº elemento:  ",i+1);
    scanf("%f",&vet[i]);
  }

  printf("Vetor informado: \n"); //exibe os valores do vetor informado
  for (int i = 0; i < tam; i++) {
    printf("%.2f ",vet[i]);
  }

  printf("\n \nVetor organizado: \n"); //exibe o vetor organizado
  organizarVetor(vet,tam); //chama a função organizarVetor
  printf("\n");

  return 0;
}//main
