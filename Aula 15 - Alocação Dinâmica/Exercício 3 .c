//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma fun��o que receba como par�metro dois vetores via refer�ncia (A e B) e o tamanho N. A fun��o
deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que:
                    C[i] = A[i] * B[i]
*/

int *criarVetC(int vetA[], int vetB[], int N){
  int *vetC;

  vetC = (int*) calloc(N, sizeof(int));

  for(int i = 0; i < N; i++){
    vetC[i] = vetA[i] * vetB[i];
  }


  return vetC;
}

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int N; //declara��o de variaveis

  printf("Forne�a o tamanho dos vetores: ");
  scanf("%i",&N);

  int vetA[N], vetB[N], *vetC;

  printf("\n\nVetor A :\n");
  for(int i = 0; i < N; i++){
    printf("Forne�a o %i� valor : ",i+1);
    scanf("%i",&vetA[i]);
  }

  printf("\n\nVetor B :\n");
  for(int i = 0; i < N; i++){
    printf("Forne�a o %i� valor: ",i+1);
    scanf("%i",&vetB[i]);
  }

  vetC = criarVetC(vetA, vetB,N);

  printf("\n\nVetor C : \n [");
  for(int i = 0; i < N; i++){
      printf(" %i ",vetC[i]);
  }
  printf("]\n");

  free(vetC);

  return 0;
}//main
