//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma matriz identidade com dimens�es 5 x 5*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int m[5][5];//declara��o de variaveis

  for(int i=0;i<5;i++){
    printf("\n");
    for(int j=0;j<5;j++){
      if(i == j){ //se a coluna for igual a linha ent�o ser� 1
        printf("1");
      }else{
        printf("0"); //caso linha e coluna sejam diferentes ser� 0
      }
    }
  } //for de matriz 5 x 5

  printf("\n");

  return 0;
}//main
