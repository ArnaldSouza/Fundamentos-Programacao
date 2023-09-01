#include <stdio.h>
#include <stdlib.h>

/*Construa um programa que leia uma matriz de tamanho 5 x 5 e
escreva a localização (linha, coluna) do maior valor encontrado na
matriz.*/

#define TAM 3
int main(){
    int m[TAM][TAM], i, j, maior, linha, coluna;

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        printf("Forneca m[%i][%i]: ", i, j);
        scanf("%i",&m[i][j]);
      }
    }
    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++)
      printf("%02i ", m[i][j]);
      printf("\n");
    }

    maior = m[0][0];
    linha = 1;
    coluna = 1;

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        if(m[i][j] > maior){
          maior = m[i][j];
          linha = i;
          coluna = j;
        }
      }
    }

    printf("O maior elemento e %i e esta na linha %i e coluna %i\n", maior, linha, coluna);
  return 0;
}
