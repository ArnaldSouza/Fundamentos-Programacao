//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 5 números e imprima em ordem inversa de leitura*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[5];//declaração de variaveis

  for(int i = 0; i < 5; i++){; //enquanto i for de 0 a 5 ele executara
    printf("informe o valor de vet[%i]:", i); //pedido do valor do vetor
    scanf("%i", &vet[i]); //armazenamento do valor do vetor
  }

  printf("Ordem inversa: "); //imprimir a ordem inversa
  for(int i = 4; i >= 0; i--){ //i vai de 0 a 5 decrementeando
    printf(" %i ",vet[i]); //mostará a ordem inversa dos numeros informados
  }
  return 0;
}//main
