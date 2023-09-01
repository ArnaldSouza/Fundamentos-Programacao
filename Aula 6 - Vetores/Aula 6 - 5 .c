//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado dois vetores, A (4 elementos) e B (5 elementos), faça um
programa em C que imprima todos os elementos comuns aos dois
vetores.*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int va[4], vb[5], vc[5], cont = 0;//declaração de variaveis

    for(int i = 0; i < 4 ; i++){
      printf("Qual %iº o valor para o vetor A:", i+1);
      scanf("%i",&va[i]);
    } //for para o vetor A

    for(int i = 0; i < 5; i++){
      printf("Qual %iº o valor para o vetor B:", i+1);
      scanf("%i",&vb[i]);
    } //for para o vetor B

    for(int i = 0; i < 4 ; i++){ //posições do vetor A
      for(int j = 0; j < 5; j++){ //posições do vetor B
        if(va[i] == vb[j]){  //procurando os valores que são iguais
          vc[i] = vb[j]; // os valores que são iguais serão armazenados no vetor c
          cont++; //se as números forem iguais então ira adicionar 1 a variavel cont
        }
      }
    }

    for(int i = 0; i < cont ; i++){
      printf("Os valores iguais dos vetores são: %i \n ", vc[i]);
    } //for para o vetor C


  return 0;
}//main
