//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int x = 10;//declara��o de variaveis
  int *ponteiro = &x;
  
  printf("O conteudo de x e': %i\n",x);
  printf("O endere�o de x e': %p\n",&x);
  printf("O valor do ponteiro e': %d\n",ponteiro);
  printf("O valor da variavel apontada pelo ponteiro e': %i \n", *ponteiro);


  printf("----------------- \n");
  ponteiro = ponteiro + 1; //variaveis int - 4 bytes
  ponteiro = ponteiro + 1;
  printf("O valor de ponteiro e': %d \n", ponteiro);

  return 0;
}//main
