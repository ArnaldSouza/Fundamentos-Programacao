//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um programa que contenha um vetor de inteiros de tamanho 5. Utilizando aritmética de ponteiros, leia os
dados do teclado e exiba seus valores multiplicados por 2. Em seguida, exiba o endereço de memória das posições
que contêm valores pares. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[5];//declaração de variaveis
  int vet2[5];

  for (int i = 0; i < 5; i++) {
    printf("Forneça o %iº elemento:",i+1);
    scanf("%i",&vet[i]);
    vet2[i] = vet[i] * 2;
  }

  int *pont = &vet2[5];

  printf("\n");
  for (int i = 0; i < 5; i++) {
    if(vet2[i] % 2 == 0){
      printf("Valor: %03i ; Endereço: %p \n",vet2[i], pont++);
    }
  }

  return 0;
}//main
