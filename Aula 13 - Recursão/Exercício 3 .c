//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Dado um vetor de inteiros e o seu número de elementos inverta a posição de seus elementos;
      Solução trivial: tamanho da array menor ou igual a 1
      Passo da recursão: troca o primeiro e o ultimo elementos e inverte o resto do array
*/

void inverte(int v[], int esq,int dir){ //função inverte
  int t;

  if(esq >= dir) //se o valor da esquerda for maior que o da direita ele não retornará nada
    return;
    t = v[esq]; //troca os vetores de posição
    v[esq] = v[dir];
    v[dir] = t;
    inverte(v, esq + 1, dir - 1); //chamada recursiva
}

void imprimir(int v[], int tam){ //função para imprimir o vetor
  for(int i = 0; i < tam;i++){
    printf("%i ",v[i]);
  }
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int esq , dir, tam;//declaração de variaveis

  printf("Qual o tamanho do vetor:"); //pede o tamanho do vetor
  scanf("%i",&tam); //aramazena o tamanho
  dir = tam - 1; //declara dir como tamanho - 1
  esq = 0;

  int vet[tam]; //declaração do vetor

  for(int i = 0; i < tam;i++){ //pede os elementos do veotr e armazena
    printf("Forneça o %iº elemento: ", i+1);
    scanf("%i",&vet[i]);
  }

  printf("\nVetor informado:\n"); //imprime o vetor original
  imprimir(vet, tam);

  inverte(vet, esq, dir);//faz a chamada da função inverte passando o vetor e as posições iniciais e finais como parametro

  printf("\n\nVetor Invertido:\n"); //imprime o vetor invertido
  imprimir(vet, tam);
  printf("\n");

  return 0;
}//main
