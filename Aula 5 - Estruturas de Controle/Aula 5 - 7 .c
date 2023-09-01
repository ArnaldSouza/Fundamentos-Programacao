//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia 10 valores inteiros e escreva no final a
soma dos valores lidos*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int num, soma = 0, somador = 0; //declaracao de variaveis

  while(somador <= 10){ //enquanto o somador for menor que 10 o while sera executado
    printf("Forneça o numero: ");
    scanf("%i",&num);

    soma = num + soma;
    somador ++;
  }

  printf("A soma final e': %i \n", soma); //fornecera o valor da soma dos numero informados
  return 0;
}//main
