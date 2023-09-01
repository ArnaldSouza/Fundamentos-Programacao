//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que contenha duas variáveis inteiras. Compare os endereços e exiba o endereço e o conteúdo
do amior endereço. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int x, y;//declaração de variaveis

  printf("Insira a variável x: ");//pede variável x
  scanf("%i",&x); //armazena x
  printf("Insira a variável y: "); //pede a variável y
  scanf("%i",&y); //armazena y

  if(&x > &y){ //compara os endereços de x e y
    printf("A variável x tem o maior endereço de memória e contém %p \n",&x); //se x for maior exibe o seu endereço
  }else if(&y > &x){
    printf("A variável y tem o maior endereço de memória e contém &p \n",&y); //se y for maior exibe o seu endereço
  }

  return 0;
}//main
