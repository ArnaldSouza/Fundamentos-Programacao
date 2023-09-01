//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Criar dois vetores A e B cada um com 10 elementos inteiros.
Desenvolver um programa que crie um vetor C que é a diferença
dos conjuntos formados pelos elementos dos vetores A e B.
Diferença de conjuntos = todos os elementos do conjunto A que
não existem no conjunto B */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int va[10], vb[10], vc[10], aux = 0;//declaração de variaveis


  for(int i = 0; i < 10 ; i++){
    printf("Qual %iº o valor para o vetor A:", i+1);
    scanf("%i",&va[i]);
  } //for para o vetor A

  for(int i = 0; i < 10; i++){
    printf("Qual %iº o valor para o vetor B:", i+1);
    scanf("%i",&vb[i]);
  } //for para o vetor B

  printf("\n");
  for(int i = 0; i < 10 ; i++){
    vc[i] = va[i] - vb[i];
  }//fazendo a subtração

  for(int i = 0; i < 10 ; i++){
    printf("Diferença entre A e B: %i \n ", vc[i]);
  } //imprimindo a subtração

  printf("\n");
  for(int i = 0; i < 10 ; i++){
    for(int j = 0; j < 10; j++) {
      if(va[i] == vb[j]){ //vendo quais são iguais em a e b
        aux = 1;
      }
    }
    if(aux == 0){
      printf("Elemento que tem A e que não tem em B: %i\n",va[i]); //exibindo quais vetores tem em A e não tem em B
    }else{
      aux = 0;
    }
  } //for para o vetor C

return 0;
}//main
