//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor que armazene 10 valores inteiros fornecidos pelo
usuário. Mostre qual é o menor elemento e a posição em que ele
se encontra no vetor */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], valor, pos;//declaração de variaveis

  printf("\n");
  for(int i = 0; i < 10; i ++){
    printf("Qual %iº o valor para o vetor:", i+1);
    scanf("%i",&vet[i]);
  }//criação do vetor de tamanho 10

  for(int i = 0; i < 10; i++){
    if(valor > vet[i]){//procurando o número menor
      valor = vet[i]; //se o numero for menor que o atual ele passrá a ser o menor
      pos = i; //a posição do numero -1 por ser um vetor
    }
 }

 printf("O menor número é o %i e está na posição %i \n",valor, pos + 1); //exbindo menor valor e sua posição


  return 0;
}//main
