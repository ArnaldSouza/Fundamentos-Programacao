//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um programa que contenha um vetor de inteiros de tamanho 5. Utilizando aritm�tica de ponteiros, leia os
dados do teclado e exiba seus valores multiplicados por 2. Em seguida, exiba o endere�o de mem�ria das posi��es
que cont�m valores pares. */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[5];//declara��o de variaveis
  int vet2[5];

  for (int i = 0; i < 5; i++) {
    printf("Forne�a o %i� elemento:",i+1);
    scanf("%i",&vet[i]);
    vet2[i] = vet[i] * 2;
  }

  int *pont = &vet2[5];

  printf("\n");
  for (int i = 0; i < 5; i++) {
    if(vet2[i] % 2 == 0){
      printf("Valor: %03i ; Endere�o: %p \n",vet2[i], pont++);
    }
  }

  return 0;
}//main
