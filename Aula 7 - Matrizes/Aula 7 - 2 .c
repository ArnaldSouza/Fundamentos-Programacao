#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e retorna a
soma dos elementos da sua diagonal principal e da sua diagonal
secundária;
Soma Principal = 15
Soma Secundária = 15*/

#define TAM 3

int main(){
    int m[TAM][TAM], i, j, somaP = 0, somaS=0;

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        printf("Forneca m[%i][%i]: ", i, j);
        scanf("%i",&m[i][j]);
      }
    }

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++)
      printf("%i", m[i][j]);
      printf("\n");
    }

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        if(i == j)
          somaP = somaP + m[i][j];
        if(i + j == 2)
          somaS = somaS + m[i][j];
    }
  }

  printf("Soma Principal: %i\n", somaP);
  printf("Soma Secundaria: %i\n", somaS);

  return 0;
}
