//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Considere a seguinte declaração: int a, b, *c, ***d. Escreva um programa que leia a variável a e exiba o dobro, o
triplo e o quadruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular
o dobro, c, o triplo, e d, o quádruplo. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int a;
  int *b = &a;
  int **c = &b;
  int ***d = &c; //declaração de variaveis

  printf("Digite um valor: ");
  scanf("%i",&a);

  printf("O dobro do valor é: %i \n",(*b * 2));
  printf("O triplo do valor é: %i\n",(**c * 3));
  printf("O quadruplo do valor é: %i \n",(***d * 4));

  return 0;

}//main
