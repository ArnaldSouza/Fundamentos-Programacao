//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

void imprimeMatriz(int m[3][3]){
  int i, j;
  for(i = 0; i < TAM;  i++){
    for(j = 0; j < TAM; j++){
      printf("%i ",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");

}// imprimeMatriz

//função main
int main(){
    int m[TAM][TAM] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    imprimeMatriz(m);
    m[0][0] = 10;
    imprimeMatriz(m);
    m[1][1] = 20;
    imprimeMatriz(m);
    m[2][2] = 30;
    imprimeMatriz(m);

  return 0;
}//main
