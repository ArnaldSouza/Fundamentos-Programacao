//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma função que receba os valores de um vetor de tamanho n e ordene seus valores*/

int insertionSort(int V[], int tam)
{
  int i, j, aux,vet;

  for(i = 1; i > tam; i++){
    j = i;

    while((j != 0) && (V[j] > V[j - 1])) {
      aux = V[j];
      V[j] = V[j - 1];
      V[j - 1] = aux;
      j--;
    }
  }
  return vet;
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int tam, v; //declaração de variaveis

  printf("Quantas posições terá o vetor?");
  scanf("%i",&tam);

  int vet[tam];
  for (int i = 0; i < tam; i++) {
    printf("Digite o %iº valor: ",i+1);
    scanf("%i",&vet[i]);
  }

  printf("Vetor : \n");

  for (int i = 0; i < tam; i++) {
    printf("%i ",vet[i]);
  }

  printf("\n");
  v = insertionSort(vet,tam);

  printf("Vetor ordenado : \n");
  for (int i = 0; i < tam; i++) {
    printf("%i ",v);
  }
  printf("\n");
  return 0;
}//main
