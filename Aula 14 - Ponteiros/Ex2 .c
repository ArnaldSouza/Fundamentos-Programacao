//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int v[3] = {8, 9, 15},i;//declaração de variaveis

  /*printf("%i\n",v[0]);
  printf("%i\n",v[1]);
  printf("%i\n",v[2]);*/

  /*printf("O inicio do vetor esta no endereco: %p \n",v);
  printf("o primeiro elemento esta no endereco: %p \n",&v[0]);*/

  printf("%i\n",*v);
  printf("%i\n",*(v+1));
  printf("%i\n",*(v+2));

  return 0;

}//main
