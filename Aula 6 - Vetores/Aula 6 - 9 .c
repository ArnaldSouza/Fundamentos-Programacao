//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor que armazene 10 valores inteiros fornecidos pelo
usu�rio. Mostre qual � o menor elemento e a posi��o em que ele
se encontra no vetor */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], valor, pos;//declara��o de variaveis

  printf("\n");
  for(int i = 0; i < 10; i ++){
    printf("Qual %i� o valor para o vetor:", i+1);
    scanf("%i",&vet[i]);
  }//cria��o do vetor de tamanho 10

  for(int i = 0; i < 10; i++){
    if(valor > vet[i]){//procurando o n�mero menor
      valor = vet[i]; //se o numero for menor que o atual ele passr� a ser o menor
      pos = i; //a posi��o do numero -1 por ser um vetor
    }
 }

 printf("O menor n�mero � o %i e est� na posi��o %i \n",valor, pos + 1); //exbindo menor valor e sua posi��o


  return 0;
}//main
