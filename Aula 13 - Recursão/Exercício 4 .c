//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Um problema típico da ciencia da computação consiste em converter um númeor da sua forma decimal para
binária. Crie um algoritmo recursivo para resolver esse problema.
    Solução trivial: x=0; quando o número inteiro já foi convertido para binário;
    Passo da recursão: saber como x/2 é convertido. Depois imprimir um digito (0 ou 1) dado o sucesso da divisão.
*/
void decbin(int dec){
  int n;
  if(dec/2 != 0){ //se o número dividido por 2 for diferente de 0
    n = dec / 2; // n será esse número dividio por 2
    decbin(n); //chamada recursiva
    printf("%i",dec % 2); //exibirá o resto da divisão do número informado por 2
  }else{
    printf("%i",dec % 2); //caso a divisão do número por dois seja 0, exibirá o 0
  }
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int dec;//declaração de variaveis

  printf("Digite um número inteiro: "); //pede um número inteiro
  scanf("%i",&dec); //armazena esse numero

  printf("\nNúmero %i em Binário: ",dec); //mostra o numero em binario chamado a função decbin
  decbin(dec);
  printf("\n\n");

  return 0;
}//main
