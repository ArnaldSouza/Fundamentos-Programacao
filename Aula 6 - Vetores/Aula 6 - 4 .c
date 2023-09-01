//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler um vetor A com 10 elementos inteiros correspondentes as
idades de um grupo de pessoas. Escreva um programa que
determine e escreva a quantidade de pessoas que possuem idade
superior a 35 anos.*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], i35 = 0;//declaração de variaveis

  for(int i = 0; i < 10; i++){; //enquanto i for de 0 a 9 ele executara
    printf("Qual a sua idade:"); //pedido da idade
    scanf("%i", &vet[i]); //armazenamento da idade

    if(vet[i] > 35){ //se o valor da idade for maior que 35
      i35 ++; //a variavel i35 aumetnara em 1
    }//if

  }//for

  printf("A quantidade de pessoas com mais de 35 anos é: %i \n",i35); //imprime a quantidade de pessoas com mais de 35 anos

  return 0;
}//main
