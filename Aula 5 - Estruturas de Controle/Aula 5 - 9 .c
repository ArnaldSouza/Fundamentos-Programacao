//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que receba dez n�meros e mostre a
quant num entre 30 e 90*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int cont = 0, n39 = 0; //declaracao de variaveis
  float num;

  while(cont <= 10){ //enquanto o contador for <= 10 pedira para fornecer a num
    printf("Forne�a dez n�meros: ");
    scanf("%f",&num);

    if(num > 30 && num <90){ //caso o num esteja entre a variavel n39 somara 1
      n39 ++;
    }
    cont ++; 
  }

  printf("A quantidade de n�meros entre 30 e 90: %i \n ",n39); //sera mostrado a qnt de num entre 30 e 90

  return 0;
}//main
