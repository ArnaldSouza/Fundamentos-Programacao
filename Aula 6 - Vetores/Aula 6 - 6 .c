#include <stdio.h>

/*Leia um vetor de 10 posições e imprima o maior valor, menor valor
e a média dos valores contidos no vetor. */

int main(){
  int vet[5], soma = 0, maior, menor, i; //declaração de variáveis
  float media;

  for(i=0;i<5;i++){
    printf("Forneça o elemento vet[%i]:", i);
    scanf("%i", &vet[i]);
  }

  maior = vet[0];
  for(i=0;i<5;i++){ //testando se o vetor é maior
    if(vet[i] > maior)
      maior = vet[i];
  }

  menor = vet[0];
  for(i=0;i<5;i++){ //testando se o vetor é menor
    if(vet[i] < menor)
      maior = vet[i];
  }

  for(i=0;i<5;i++){ //soma dos vetores
    soma += vet[i];
  }

  media = (float) soma/5; //média dos vetores
  printf("maior = %i,menor = %i, media = %f \n", maior, menor, media); //printando o maior, menor e a média

  return 0;
}
