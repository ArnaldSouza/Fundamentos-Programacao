//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado dois vetores, A (4 elementos) e B (5 elementos), fa�a um
programa em C que imprima todos os elementos comuns aos dois
vetores.*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int va[4], vb[5], vc[5], cont = 0;//declara��o de variaveis

    for(int i = 0; i < 4 ; i++){
      printf("Qual %i� o valor para o vetor A:", i+1);
      scanf("%i",&va[i]);
    } //for para o vetor A

    for(int i = 0; i < 5; i++){
      printf("Qual %i� o valor para o vetor B:", i+1);
      scanf("%i",&vb[i]);
    } //for para o vetor B

    for(int i = 0; i < 4 ; i++){ //posi��es do vetor A
      for(int j = 0; j < 5; j++){ //posi��es do vetor B
        if(va[i] == vb[j]){  //procurando os valores que s�o iguais
          vc[i] = vb[j]; // os valores que s�o iguais ser�o armazenados no vetor c
          cont++; //se as n�meros forem iguais ent�o ira adicionar 1 a variavel cont
        }
      }
    }

    for(int i = 0; i < cont ; i++){
      printf("Os valores iguais dos vetores s�o: %i \n ", vc[i]);
    } //for para o vetor C


  return 0;
}//main
