//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Considere a seguinte declara��o: int a, b, *c, ***d. Escreva um programa que leia a vari�vel a e exiba o dobro, o
triplo e o quadruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular
o dobro, c, o triplo, e d, o qu�druplo. */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int a;
  int *b = &a;
  int **c = &b;
  int ***d = &c; //declara��o de variaveis

  printf("Digite um valor: ");
  scanf("%i",&a);

  printf("O dobro do valor �: %i \n",(*b * 2));
  printf("O triplo do valor �: %i\n",(**c * 3));
  printf("O quadruplo do valor �: %i \n",(***d * 4));

  return 0;

}//main
