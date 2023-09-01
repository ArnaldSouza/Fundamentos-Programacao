//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Dado um vetor de inteiros e o seu n�mero de elementos inverta a posi��o de seus elementos;
      Solu��o trivial: tamanho da array menor ou igual a 1
      Passo da recurs�o: troca o primeiro e o ultimo elementos e inverte o resto do array
*/

void inverte(int v[], int esq,int dir){ //fun��o inverte
  int t;

  if(esq >= dir) //se o valor da esquerda for maior que o da direita ele n�o retornar� nada
    return;
    t = v[esq]; //troca os vetores de posi��o
    v[esq] = v[dir];
    v[dir] = t;
    inverte(v, esq + 1, dir - 1); //chamada recursiva
}

void imprimir(int v[], int tam){ //fun��o para imprimir o vetor
  for(int i = 0; i < tam;i++){
    printf("%i ",v[i]);
  }
}

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int esq , dir, tam;//declara��o de variaveis

  printf("Qual o tamanho do vetor:"); //pede o tamanho do vetor
  scanf("%i",&tam); //aramazena o tamanho
  dir = tam - 1; //declara dir como tamanho - 1
  esq = 0;

  int vet[tam]; //declara��o do vetor

  for(int i = 0; i < tam;i++){ //pede os elementos do veotr e armazena
    printf("Forne�a o %i� elemento: ", i+1);
    scanf("%i",&vet[i]);
  }

  printf("\nVetor informado:\n"); //imprime o vetor original
  imprimir(vet, tam);

  inverte(vet, esq, dir);//faz a chamada da fun��o inverte passando o vetor e as posi��es iniciais e finais como parametro

  printf("\n\nVetor Invertido:\n"); //imprime o vetor invertido
  imprimir(vet, tam);
  printf("\n");

  return 0;
}//main
