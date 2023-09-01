#include <stdio.h>

/*Crie e inicialize um vetor de inteiros e faça a soma dos seus
elementos. Apresente o resultado*/

int main(){
  int vet[5], soma = 0; //declaração do tamanho do vetor, a soma e i

  for(int i = 0; i < 5; i++){; //enquanto i for de 0 a 5 ele executara
    printf("informe o valor de vet[%i]:", i); //pedido do valor do vetor
    scanf("%i", &vet[i]); //armazenamento do valor do vetor
  }

  for(int i = 0; i < 5; i++) //enquanto i for de 0 a 5 ele executara
    soma = soma + vet[i]; //soma dos valores colocados no vetor

    printf("A soma e: %i\n", soma); //exibe o resultado da soma

  return 0;
}//main
