//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa para calcular o fatorial de um n�mero inteiro n*/

//fun��o main
int main(){

  setlocale(LC_ALL,""); //para poder fazer o uso de caracteres especiais
  int num, cont = 1, fat = 1;//declara��o de variaveis

  printf("Digite o numero do fatorial:\n"); //pedido para digitar um numero
  scanf("%i",&num); //recebe o valor

  while(cont <= num){ //enquanto cont for menor ou igual a num ele executaraS
    fat = fat * cont;
    cont ++;
  }

  if(num < 0){ //se o numero for menor que zero n�o ser� executado a fatorial
    printf("Op��o Inv�lida !!!\n");
  }else{ // sera executado quando o numero � maior ou igual a 0
    printf("O fatorial de %i �: %i \n",num ,fat);
  }

  return 0;
}//main
